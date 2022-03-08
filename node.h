#ifndef NODE_H
#define NODE_H

#include "entity.h"

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

#endif // NODE_H
