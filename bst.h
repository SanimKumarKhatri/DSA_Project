#ifndef BST_H
#define BST_H

#include "node.h"

class BST{
public:
    BST();
    Node* root;
    bool isEmpty();
protected:
    void add(Patient c,Node* currentNode);
    bool search(int value, Node* node);
    bool remove(Node** node,int value);
};

#endif // BST_H
