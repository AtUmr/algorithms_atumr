#ifndef _ALGO_ATUMR_LIST_H_
#define _ALGO_ATUMR_LIST_H_

namespace atumr
{
    
    template <typename T>
    class List 
    {
        private:
            class ListNode 
            {

            }
        
        public:
            class const_iterator 
            {

            }

            class iterator : public const_iterator 
            {

            }
        
        public:
            List()
            {
                initialize() ;
            }

            ~List()
            {
                clear();
                delete _head;
                delete _tail;
            }

            void clear()
            {
                
            }
        
        private:
            int _size;
            ListNode *_head;
            ListNode *_tail;

            void initialize() 
            {
                _size = 0;
                _head = new ListNode;
                _tail = new ListNode;

            }
    }

}

#endif