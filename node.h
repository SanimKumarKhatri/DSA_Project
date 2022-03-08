#ifndef NODE_H
#define NODE_H

#include "entity.h"

struct Node{
    Patient a;
    Node* rightchild;
    Node* leftchild;
    int height;
};
    /*//initialize
    Node();
    Node(Patient b);
    ~Node();

    bool hasLeftChild();
    bool hasRightChild();
    bool isLeaf();
};*/

#endif // NODE_H
