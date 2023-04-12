#ifndef ALGO_ATUMR_BINARYTREE_H
#define ALGO_ATUMR_BINARYTREE_H


namespace atumr{
  
template<typename T>
class BinaryTree {
    private:
        struct BinaryNode {
            T element;
            BinaryNode *left;
            BinaryNode *right;

            BinaryNode(const T & value = T(),
                            BinaryNode *lptr=nullptr,
                            BinaryNode *rptr=nullptr)
                :element{value}, left{lptr}, right{rptr}
            {}

            BinaryNode(T && value,
                            BinaryNode *lptr,
                            BinaryNode *rptr)
                :element{std::move(value)}, left{lptr}, right{rptr}
            {}
        };
    
    public:

    private:
};

}


#endif