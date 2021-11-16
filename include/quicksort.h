#ifndef ALGO_ATUMR_QUICKSORT_H
#define ALGO_ATUMR_QUICKSORT_H


#include "generic.h"

namespace atumr{
  
  template <typename T>
  static int _partition(T *list, int start, int end){
      // TODO partition = random_value
      int partition = list[start];

      int i=start+1, j=end-1;
      while(i<j){
          while((i<end) && (list[i]<=partition)){
              ++i;
          }
          while((j>start)&&(list[j]>partition)){
              --j;
          }
          if(i<j){
              swap(list[i], list[j]);
          }
      }

      swap(list[start], list[j]);
      return j;
  }

  template <typename T>
  static void quickSort(T *list, int start, int end){
      if(start<end-1){
          int partition_index = _partition(list, start, end);
          quickSort(list, start, partition_index);
          quickSort(list, partition_index+1, end);
      }
  }

}


#endif