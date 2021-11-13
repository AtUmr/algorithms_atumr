#ifndef ALGO_ATUMR_MERGESORT_H
#define ALGO_ATUMR_MERGESORT_H


namespace atumr{
  
  template <typename T>
  static void _merge(T *list, int left, int mid, int right){
      T mergeList[right-left];
      int curIter=0, leftIter=left, rightIter=mid;
      while(leftIter<mid && rightIter<right){
          if(list[leftIter]<list[rightIter]){
              mergeList[curIter++] = list[leftIter++];
          } else {
              mergeList[curIter++] = list[rightIter++];
          }
      }

      while(leftIter<mid){
          mergeList[curIter++] = list[leftIter++];
      }

      while(rightIter<right){
          mergeList[curIter++] = list[rightIter++];
      }

      for(int i=0;i<curIter;++i){
          list[i+left] = mergeList[i];
      }
  }

  template <typename T>
  static void mergeSort(T *list, int start, int end){
      if(start<end-1){
          int mid = (start+end)/2;
          mergeSort(list, start, mid);
          mergeSort(list, mid, end);
          _merge(list, start, mid, end);
      }
  }

}


#endif