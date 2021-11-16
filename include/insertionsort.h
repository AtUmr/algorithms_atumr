#ifndef ALGO_ATUMR_INSERTIONSORT_H
#define ALGO_ATUMR_INSERTIONSORT_H

#include "generic.h"

namespace atumr{

  template <typename T>
  static void insertionSort(T *list, int start, int end){
      for(int i=start+1;i<end;++i){
          int j=i-1;
          while((j>=start) && list[j]>list[j+1]){
              swap(list[j], list[j+1]);
              --j;
          }
      }
  }

}


#endif