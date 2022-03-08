#ifndef NODE_H
#define NODE_H

#include "entity.h"
#include <cmath>

class Node{
public:

    Patient a;
    Node* rightchild;
    Node* leftchild;

    //initialize
    Node();
    Node(Patient b);
    ~Node();

    bool hasLeftChild();
    bool hasRightChild();
    bool isLeaf();
};

int max(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}
#endif // NODE_H
