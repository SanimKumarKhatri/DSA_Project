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
    Node(Patient b);
    ~Node();

    bool hasLeftChild();
    bool hasRightChild();
    bool isLeaf();
};

#endif // NODE_H
