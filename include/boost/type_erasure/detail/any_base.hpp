// Boost.TypeErasure library
//
// Copyright 2011 Steven Watanabe
//
// Distributed under the Boost Software License Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// $Id$

#ifndef BOOST_TYPE_ERASURE_DETAIL_ANY_BASE_HPP_INCLUDED
#define BOOST_TYPE_ERASURE_DETAIL_ANY_BASE_HPP_INCLUDED

namespace boost {
namespace type_erasure {

template<class Derived>
struct any_base
{
    typedef void _boost_type_erasure_is_any;
    typedef Derived _boost_type_erasure_derived_type;
    void* _boost_type_erasure_deduce_constructor(...) { return 0; }
    void* _boost_type_erasure_deduce_assign(...) { return 0; }
#ifndef BOOST_NO_CXX11_RVALUE_REFERENCES
    void* _boost_type_erasure_deduce_move_constructor(...) { return 0; }
    void* _boost_type_erasure_deduce_move_assign(...) { return 0; }
#endif
};

}
}

#endif
