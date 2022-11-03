#include "algorithm.h"
#include "string.cc"
#include "io.cc"
// #include <json-c/json.h>


template /*W*/ void cp::sprint_fmt<char const*>(cp::Dynamic_Array<char>*, char const*, char const*);
template /*W*/ void cp::sprint_fmt<char const*, char const*>(cp::Dynamic_Array<char>*, char const*, char const*, char const*);
template /*W*/ cp::Dynamic_Buffer<char>& cp::Dynamic_Array<cp::Dynamic_Buffer<char>>::operator[](unsigned long);
template /*W*/ void cp::shrink_to_fit<char const*>(cp::Dynamic_Array<char const*>*);
template /*W*/ cp::Dynamic_Array<char> (&cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>::operator[](unsigned long)) [2];
template /*W*/ void* (&cp::Dynamic_Buffer<void* [2]>::operator[](unsigned long)) [2];
// template /*W*/ char& cp::Dynamic_Buffer<char>::operator[](unsigned long);
template /*W*/ json_object*& cp::Dynamic_Buffer<json_object*>::operator[](unsigned long);
template /*W*/ char const*& cp::Dynamic_Buffer<char const*>::operator[](unsigned long);
template /*W*/ unsigned long cp::cap<char>(cp::Dynamic_Array<char>);
template /*W*/ unsigned long cp::cap<char>(cp::Dynamic_Buffer<char>);
template /*W*/ cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]> cp::end<cp::Dynamic_Array<char> [2]>(cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>);
template /*W*/ cp::Buffer_Iterator<char> cp::end<char>(cp::Dynamic_Buffer<char>);
template /*W*/ cp::Buffer_Iterator<char const*> cp::end<char const*>(cp::Dynamic_Buffer<char const*>);
template /*W*/ unsigned long cp::len<cp::Dynamic_Array<char> [2]>(cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>);
template /*W*/ unsigned long cp::len<char>(cp::Dynamic_Array<char>);
template /*W*/ unsigned long cp::len<char>(cp::Dynamic_Buffer<char>);
template /*W*/ unsigned long cp::len<cp::Dynamic_Buffer<char> >(cp::Dynamic_Array<cp::Dynamic_Buffer<char> >);
template /*W*/ unsigned long cp::len<char const*>(cp::Dynamic_Buffer<char const*>);
template /*W*/ unsigned long cp::max<unsigned long>(unsigned long, unsigned long);
template /*W*/ unsigned long cp::min<unsigned long>(unsigned long, unsigned long);
template /*W*/ void cp::copy<char>(char*, cp::Dynamic_Buffer<char>);
template /*W*/ void cp::copy<cp::Dynamic_Buffer<char>, cp::Dynamic_Buffer<char> >(cp::Dynamic_Buffer<char>, cp::Dynamic_Buffer<char>);
template /*W*/ cp::Dynamic_Buffer<char> cp::drop<char>(cp::Dynamic_Buffer<char>, unsigned long);
template /*W*/ char* cp::endp<char>(cp::Dynamic_Array<char>);
template /*W*/ void cp::init<cp::Dynamic_Array<char> [2]>(cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>*, unsigned long);
template /*W*/ void cp::init<void* [2]>(cp::Dynamic_Buffer<void* [2]>*, unsigned long);
template /*W*/ void cp::init<char>(cp::Dynamic_Array<char>*, unsigned long);
template /*W*/ void cp::init<unsigned char>(cp::Dynamic_Buffer<unsigned char>*, unsigned long);
template /*W*/ void cp::init<cp::Dynamic_Buffer<char> >(cp::Dynamic_Array<cp::Dynamic_Buffer<char> >*, unsigned long);
template /*W*/ void cp::init<json_object*>(cp::Dynamic_Buffer<json_object*>*, unsigned long);
template /*W*/ void cp::init<char const*>(cp::Dynamic_Array<char const*>*, unsigned long);
template /*W*/ void cp::init<char const*>(cp::Dynamic_Buffer<char const*>*, unsigned long);
template /*W*/ void cp::next<cp::Dynamic_Array<char> [2]>(cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]>*, unsigned long);
template /*W*/ void cp::next<char>(cp::Buffer_Iterator<char>*, unsigned long);
template /*W*/ void cp::next<char const*>(cp::Buffer_Iterator<char const*>*, unsigned long);
template /*W*/ void cp::push<char>(cp::Dynamic_Array<char>*, char);
template /*W*/ void cp::push<cp::Dynamic_Buffer<char> >(cp::Dynamic_Array<cp::Dynamic_Buffer<char> >*, cp::Dynamic_Buffer<char>);
template /*W*/ void cp::push<char const*>(cp::Dynamic_Array<char const*>*, char const*);
template /*W*/ void cp::shut<cp::Dynamic_Array<char> [2]>(cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>*);
template /*W*/ void cp::shut<void* [2]>(cp::Dynamic_Buffer<void* [2]>*);
template /*W*/ void cp::shut<char>(cp::Dynamic_Array<char>*);
template /*W*/ void cp::shut<unsigned char>(cp::Dynamic_Buffer<unsigned char>*);
template /*W*/ void cp::shut<char const*>(cp::Dynamic_Buffer<char const*>*);
template /*W*/ cp::Dynamic_Buffer<char> cp::take<char>(cp::Dynamic_Buffer<char>, unsigned long);
template /*W*/ cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]> cp::begin<cp::Dynamic_Array<char> [2]>(cp::Dynamic_Buffer<cp::Dynamic_Array<char> [2]>);
template /*W*/ cp::Buffer_Iterator<char> cp::begin<char>(cp::Dynamic_Buffer<char>);
template /*W*/ cp::Buffer_Iterator<char const*> cp::begin<char const*>(cp::Dynamic_Buffer<char const*>);
template /*W*/ void cp::print<cp::Dynamic_Buffer<char const*>, char const*>(cp::Dynamic_Buffer<char const*>, char const*);
template /*W*/ void cp::print<char const*>(cp::Dynamic_Buffer<char const*>);
template /*W*/ void cp::print<char const*, cp::Dynamic_Buffer<char const*>, char const*>(char const*, cp::Dynamic_Buffer<char const*>, char const*);
template /*W*/ void cp::print<char const*, char const*>(char const*, char const*);
template /*W*/ void cp::split<char, cp::Dynamic_Array<cp::Dynamic_Buffer<char> > >(cp::Dynamic_Array<cp::Dynamic_Buffer<char> >*, cp::Dynamic_Buffer<char>, char, bool);
template /*W*/ void cp::append<char>(cp::Dynamic_Array<char>*, cp::Dynamic_Array<char>);
template /*W*/ char* cp::beginp<char>(cp::Dynamic_Array<char>);
template /*W*/ char* cp::beginp<char>(cp::Dynamic_Buffer<char>);
template /*W*/ void cp::resize<char>(cp::Dynamic_Buffer<char>*, unsigned long);
template /*W*/ void cp::resize<char>(char**, unsigned long*, unsigned long);
template /*W*/ void cp::resize<cp::Dynamic_Buffer<char> >(cp::Dynamic_Buffer<char>**, unsigned long*, unsigned long);
template /*W*/ void cp::resize<char const*>(cp::Dynamic_Buffer<char const*>*, unsigned long);
template /*W*/ void cp::resize<char const*>(char const***, unsigned long*, unsigned long);
template /*W*/ cp::Dynamic_Array<char> (*cp::m_alloc<cp::Dynamic_Array<char> [2]>(unsigned long)) [2];
template /*W*/ void* (*cp::m_alloc<void* [2]>(unsigned long)) [2];
template /*W*/ char* cp::m_alloc<char>(unsigned long);
template /*W*/ unsigned char* cp::m_alloc<unsigned char>(unsigned long);
template /*W*/ cp::Dynamic_Buffer<char>* cp::m_alloc<cp::Dynamic_Buffer<char> >(unsigned long);
template /*W*/ json_object** cp::m_alloc<json_object*>(unsigned long);
template /*W*/ char const** cp::m_alloc<char const*>(unsigned long);
template /*W*/ void cp::println<char const*>(char const*);
template /*W*/ void cp::reserve<char>(cp::Dynamic_Array<char>*, unsigned long);
template /*W*/ char* cp::m_ralloc<char>(char*, unsigned long);
template /*W*/ cp::Dynamic_Buffer<char>* cp::m_ralloc<cp::Dynamic_Buffer<char> >(cp::Dynamic_Buffer<char>*, unsigned long);
template /*W*/ char const** cp::m_ralloc<char const*>(char const**, unsigned long);
template /*W*/ void cp::push_str<char>(cp::Dynamic_Array<char>*, cp::Dynamic_Buffer<char>);
template /*W*/ cp::Dynamic_Buffer<char const*> cp::to_dbuff<char const*>(cp::Dynamic_Array<char const*>);
template /*W*/ void cp::print_fmt<char>(char*, unsigned long, char const*);
template /*W*/ cp::Dynamic_Array<char> (&cp::operator*<cp::Dynamic_Array<char> [2]>(cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]> const&)) [2];
template /*W*/ char& cp::operator*<char>(cp::Buffer_Iterator<char> const&);
template /*W*/ char const*& cp::operator*<char const*>(cp::Buffer_Iterator<char const*> const&);
template /*W*/ bool cp::operator==<char>(cp::Dynamic_Buffer<char>, cp::Dynamic_Buffer<char>);
template /*W*/ bool cp::operator!=<cp::Dynamic_Array<char> [2]>(cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]> const&, cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]> const&);
template /*W*/ bool cp::operator!=<char>(cp::Buffer_Iterator<char> const&, cp::Buffer_Iterator<char> const&);
template /*W*/ bool cp::operator!=<char const*>(cp::Buffer_Iterator<char const*> const&, cp::Buffer_Iterator<char const*> const&);
template /*W*/ void cp::operator++<cp::Dynamic_Array<char> [2]>(cp::Buffer_Iterator<cp::Dynamic_Array<char> [2]>&, int);
template /*W*/ void cp::operator++<char>(cp::Buffer_Iterator<char>&, int);
template /*W*/ void cp::operator++<char const*>(cp::Buffer_Iterator<char const*>&, int);