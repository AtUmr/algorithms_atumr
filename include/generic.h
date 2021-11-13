#ifndef ALGO_ATUMR_GENERIC_H
#define ALGO_ATUMR_GENERIC_H


namespace atumr{
  
  template <typename T>
  static inline T max(T a, T b){
    return a > b ? a : b;
  }

  template <typename T>
  static inline T min(T a, T b){
    return a < b ? a : b;
  }


  template <typename T>
  static inline void swap(T &a, T &b){
    T _t(a);
    a = b;
    b = _t;
  }

}


#endif