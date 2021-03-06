
//          Copyright Oliver Kowalke 2009.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef BOOST_COROUTINES_DETAIL_STANDARD_STACK_ALLOCATOR_H
#define BOOST_COROUTINES_DETAIL_STANDARD_STACK_ALLOCATOR_H

#include <cstddef>

#include <boost/config.hpp>

#include <boost/coroutine/detail/config.hpp>

#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_PREFIX
#endif

namespace boost {
namespace coroutines {

struct stack_context;

namespace detail {

class BOOST_COROUTINES_DECL standard_stack_allocator
{
public:
    static bool is_stack_unbound();

    static std::size_t default_stacksize();

    static std::size_t minimum_stacksize();

    static std::size_t maximum_stacksize();

    void allocate( stack_context &, std::size_t);

    void deallocate( stack_context &);
};

}}}

#ifdef BOOST_HAS_ABI_HEADERS
#  include BOOST_ABI_SUFFIX
#endif

#endif // BOOST_COROUTINES_DETAIL_STANDARD_STACK_ALLOCATOR_H
