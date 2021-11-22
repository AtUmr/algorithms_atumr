#ifndef ALGO_ATUMR_LIST_H
#define ALGO_ATUMR_LIST_H

#include "generic.h"

namespace atumr{
  
  template <typename T>
  class List {
    private:
      class ListNode {
        public:
        ListNode(const T & obj = T{},
                        ListNode &pNext = nullptr,
                        ListNode &pPrev = nullptr)
              : element{obj}, next{pNext}, prev{pPrev} {}
        
        ListNode(const T && obj,
                        ListNode &pNext = nullptr,
                        ListNode &pPrev = nullptr)
              : element(std::move(obj)), next(pNext), prev(pPrev) {}
        
        private:
          T element;
          ListNode* next;
          ListNode* prev;

          friend class List<T>;
      }
    
    public:
      class const_iterator {

      }

      class iterator : public const_iterator {

      }
    
    public:
      List(){
        initialize() ;
      }

      ~List(){
        clear();
        delete _head;
        delete _tail;
      }

      void clear(){
        while
      }
    
    private:
      int _size;
      ListNode *_head;
      ListNode *_tail;

      void initialize() {
        _size = 0;
        _head = new ListNode;
        _tail = new ListNode;
        _head->next = _tail;
        _tail->prev = _head;
      }
  };

}

#endif