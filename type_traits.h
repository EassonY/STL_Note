#ifndef STL_Note_ALLOCATOR_H_
#define STL_Note_ALLOCATOR_H_

// 类型 萃取机

// 用上 standard header for this file~

namespace mystl
{

// helper struct

template <class T, T v>
struct m_integral_constant  // 所有traits类的基类
{
    static constexpr T value = v;  //  constexpr 字面值，拿一个
};





}



#endif