LIB_VERSION = 1.1.0

LIB_VERSION_MAJOR = $(word 1, $(subst ., , $(LIB_VERSION)))

ifndef debug
debug=0 # Default mode
endif

BUILD_DIR = target
BUILD_DIR_TESTS = target/tests
SRC_DIR = src
TEST_DIR = tests
INSTALL_PREFIX = /usr
INSTALL_PREFIX_BIN = /usr/bin
INSTALL_PREFIX_LIB = /usr/lib64
INSTALL_PREFIX_INCLUDE = /usr/include

CC = g++
INCS = -Isrc
LIBS = -l:libcurl.so.4 -l:libjson-c.so.5
TEST_LIBS = -l:libcriterion.so.3
# LIBS = -lcurl -ljson-c

DEBFLAGS = -g -Wall
RELFLAGS = -O2
MODE_FLAGS = $(RELFLAGS)
ifeq ($(strip $(debug)),1)
MODE_FLAGS = $(DEBFLAGS)
endif

CFLAGS = $(MODE_FLAGS) $(INCS) -fno-implicit-templates
LDFLAGS = $(LIBS)
TEST_LDFLAGS = $(LDFLAGS) $(TEST_LIBS)

LIB_LNAME = libpackcomp.so
LIB_SONAME = $(LIB_LNAME).$(LIB_VERSION_MAJOR)
LIB = $(LIB_LNAME).$(LIB_VERSION)


SRCS = $(shell find $(SRC_DIR) -name "*.cc")
HS = $(shell find $(SRC_DIR) -name "*.cc")
# SRCS_D1 = $(shell find $(SRC_DIR) -maxdepth 1 -name "*.cc")
SRCS_D1 = $(SRC_DIR)/packcomp.cc
TEST_SRCS = $(shell find $(TEST_DIR) -maxdepth 1 -name "*.cc")
TESTS = $(addprefix $(BUILD_DIR_TESTS)/, $(basename $(notdir $(TEST_SRCS))))


all: lib

.PHONY: deb check dump
deb:
	@echo "$(LIB_VERSION_MAJOR)"
	@echo "$(SRCS)"
	@echo "$(HS)"
	@echo "$(SRCS_D1)"
	@echo "$(TEST_SRCS)"
	@echo "$(TESTS)"

check:
	ldd -r $(BUILD_DIR)/$(LIB)

dump: lib
	objdump -D --demangle $(BUILD_DIR)/$(LIB_LNAME) > $(BUILD_DIR)/$(LIB_LNAME).s

symbols: lib
	nm --demangle $(BUILD_DIR)/$(LIB_LNAME) > $(BUILD_DIR)/$(LIB_LNAME).sym
	 


lib: $(BUILD_DIR)/$(LIB)

test: lib $(TESTS)
	for test in $(TESTS) ; do \
		LD_LIBRARY_PATH=$(BUILD_DIR) ./$$test ; \
	done


run: 
ifdef test
	@echo "test: $(test)"
	@make $(BUILD_DIR_TESTS)/$(test)
	LD_LIBRARY_PATH=$(BUILD_DIR) $(BUILD_DIR_TESTS)/$(test)
endif

build: 
ifdef test
	@echo "test: $(test)"
	@make $(BUILD_DIR_TESTS)/$(test)
endif

install-lib:
	mkdir -p $(INSTALL_PREFIX_LIB)
	cp -f $(BUILD_DIR)/$(LIB) $(INSTALL_PREFIX_LIB)
	ln -sf $(LIB) $(INSTALL_PREFIX_LIB)/$(LIB_SONAME)
	ln -sf $(LIB_SONAME) $(INSTALL_PREFIX_LIB)/$(LIB_LNAME)


install-headers: 
	mkdir -p $(INSTALL_PREFIX_INCLUDE)/packcomp
	cp -f $(SRC_DIR)/packcomp.h $(INSTALL_PREFIX_INCLUDE)/packcomp/

install: install-lib install-headers


uninstall-lib:
	rm -f $(INSTALL_PREFIX_LIB)/$(LIB_LNAME)\
	      $(INSTALL_PREFIX_LIB)/$(LIB_SONAME)\
	      $(INSTALL_PREFIX_LIB)/$(LIB)

uninstall-headers:
	rm -rf $(INSTALL_PREFIX_INCLUDE)/packcomp

uninstall: uninstall-lib uninstall-headers

clean:
	$(RM) -r target


$(BUILD_DIR_TESTS)/%: $(TEST_DIR)/%.cc $(SRCS) $(HS)
	@mkdir -p $(BUILD_DIR_TESTS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TEST_DIR)/$(notdir $@).cc -o $@ $(LDFLAGS) $(TEST_LDFLAGS) -lpackcomp

$(BUILD_DIR)/$(LIB): $(SRCS) $(HS)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(CPPFLAGS) -fPIC -shared -Wl,-soname,$(LIB_SONAME) $(SRCS_D1) -o $@ $(LDFLAGS)
	ln -s $(LIB) $(BUILD_DIR)/$(LIB_SONAME)
	ln -s $(LIB_SONAME) $(BUILD_DIR)/$(LIB_LNAME)


.PHONY: all lib cli build run test test-bin 
.PHONY: install-lib install-cli install install-headers install-dev uninstall clean
