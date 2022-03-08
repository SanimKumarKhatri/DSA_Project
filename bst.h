#ifndef BST_H
#define BST_H

#include "node.h"

class BST{
public:
    BST();
    Node* root;
    bool isEmpty();

    //for some purpose
    int MAXID;

    //avl tree for balancing to improve time complexity
    int height(Node*);
    int difference(Node*);
    Node *rr_rotate(Node*);
    Node *ll_rotate(Node*);
    Node *rl_rotate(Node*);
    Node *lr_rotate(Node*);
    Node *balance(Node*);
    Node *insert(Node*, Patient);
    Node *del(Node*, Patient);
    void add(Patient c,Node* currentNode);
    Patient search(int value, Node* node);
    Patient searchBST(int);
    bool remove(Node** node,int value);
};

#endif // BST_H
