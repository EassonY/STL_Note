#ifndef STL_Note_TYPE_TRAITS_H_
#define STL_Note_TYPE_TRAITS_H_

// 类型 萃取机

// 用上 standard header for this file~

#include <type_traits.h>

namespace mystl
{

// helper struct

template <class T, T v>
struct m_integral_constant  // 所有traits类的基类
{
    static constexpr T value = v;  //  constexpr 字面值，拿一个
};


template <bool b>
using m_bool_constant = m_integral_constant<bool, b>

typedef m_bool_constant<true> m_true_type;
typedef m_bool_constant<false> m_false_type;

/*********************************/
 
//  type traits

//  is_pair

//

template <class T1, class T2>
struct pair;

//

template <class T>
struct is_pair : mystl::m_false_type {};

template <class T1, class T2>
struct is_pair<mystl::pair<T1, T2>> : mystl::m_true_type {};

//


}



#endif