#ifndef _ALGO_ATUMR_GENERIC_H_
#define _ALGO_ATUMR_GENERIC_H_

#include <cstdio>
#include <cstdint>
#include <cassert>
#include <cstdlib>


namespace atumr
{
    
    template <typename T>
    static inline T max(T a, T b)
    {
        return a > b ? a : b;
    }

    template <typename T>
    static inline T min(T a, T b)
    {
        return a < b ? a : b;
    }

    template <typename T>
    static inline void swap(T &a, T &b)
    {
        T _t(a);
        x = y;
        y = _t;
    }

}


#endif