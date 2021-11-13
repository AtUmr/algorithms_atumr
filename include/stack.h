#ifndef ALGO_ATUMR_STACK_H
#define ALGO_ATUMR_STACK_H

namespace atumr{

    const uint32_t defaultCapacity = 100;

    template<typename T>
    class Stack {
        public:
            Stack(uint32_t capacity=defaultCapacity)
                : _capacity{capacity}, _size{0}, _elements{new T[capacity]}{
            }
            
            Stack(const Stack &other)
                :_capacity{other._capacity}, _size{other._size}, _elements(new T[capacity]){
                for(uint32_t i=0; i<_capacity; ++i){
                    _elements[i] = other._elements[i];
                }
            }

            ~Stack(){
                delete [] _elements;
            }

            const bool empty(){
                return _size==0;
            }

            const T & top(){
                if(empty()){

                }
                return _elements[_size-1];
            }

            void push(const T& element){
                if(_size==capacity){

                }
                _elements[_size++] = element;
            }

            void pop(){
                if(empty()){
                    return;
                }
                _size--;
            }

            const uint32_t size(){
                return _size;
            }

        private:
            uint32_t _capacity;
            uint32_t _size;
            T *_elements;

    }
}

#endif
