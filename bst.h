#ifndef BST_H
#define BST_H

#include "node.h"

class BST{
public:
    BST();
    Node* root;
    //bool isEmpty();

    //for some purpose
    int MAXID;

    int getHeight(struct Node *n){
        if(n==NULL)
            return 0;
        return n->height;
    }

    struct Node *createNode(Patient key){
        qDebug()<<"Creating node";
        struct Node* node = new Node;//(struct Node *) malloc(sizeof(struct Node));
        qDebug()<<"Node created";
        node->a=key;
        qDebug()<<"Node updated";
        qDebug()<<key.patientNo;
        node->leftchild = NULL;
        node->rightchild = NULL;
        node->height = 1;
        return node;
    }

    int max (int a, int b){
        return (a>b)?a:b;
    }

    int getBalanceFactor(struct Node * n){
        if(n==NULL){
            return 0;
        }
        return getHeight(n->leftchild) - getHeight(n->rightchild);
    }

    struct Node* rightRotate(struct Node* y){
        struct Node* x = y->leftchild;
        struct Node* T2 = x->rightchild;

        x->rightchild = y;
        y->leftchild = T2;

        x->height = max(getHeight(x->rightchild), getHeight(x->leftchild)) + 1;
        y->height = max(getHeight(y->rightchild), getHeight(y->leftchild)) + 1;

        return x;
    }

    struct Node* leftRotate(struct Node* x){
        struct Node* y = x->rightchild;
        struct Node* T2 = y->leftchild;

        y->leftchild = x;
        x->rightchild = T2;

        x->height = max(getHeight(x->rightchild), getHeight(x->leftchild)) + 1;
        y->height = max(getHeight(y->rightchild), getHeight(y->leftchild)) + 1;

        return y;
    }

    struct Node *insert(struct Node* node, Patient key){
        if (node == NULL){
            qDebug()<<"inside null condition";
            return  createNode(key);
        }

        if (key.patientNo < node->a.patientNo){
            qDebug()<<"Inside left node";
            node->leftchild  = insert(node->leftchild, key);}
        else if (key.patientNo > node->a.patientNo){
            qDebug()<<"Inside right node";
            node->rightchild = insert(node->rightchild, key);}
        node->height = 1 + max(getHeight(node->leftchild), getHeight(node->rightchild));
        int bf = getBalanceFactor(node);

        // Left Left Case
            if(bf>1 && key.patientNo < node->leftchild->a.patientNo){
                return rightRotate(node);
            }
        // Right Right Case
            if(bf<-1 && key.patientNo > node->rightchild->a.patientNo){
                return leftRotate(node);
            }
        // Left Right Case
        if(bf>1 && key.patientNo > node->leftchild->a.patientNo){
                node->leftchild = leftRotate(node->leftchild);
                return rightRotate(node);
            }
        // Right Left Case
        if(bf<-1 && key.patientNo < node->rightchild->a.patientNo){
                node->rightchild = rightRotate(node->rightchild);
                return leftRotate(node);
            }
        return node;
    }

    void preOrder(struct Node *root)
    {
        if(root != NULL)
        {
            printf("%d %d", root->a.patientNo, root->a.age);
            preOrder(root->leftchild);
            preOrder(root->rightchild);
        }
    }
    //avl tree for balancing to improve time complexity
    /*int height(Node*);
    int difference(Node*);
    Node *rr_rotate(Node*);
    Node *ll_rotate(Node*);
    Node *rl_rotate(Node*);
    Node *lr_rotate(Node*);
    Node *balance(Node*);
    Node *insert(Node*, Patient);
    Node *del(Node*, Patient);
    Node *createNode(Patient);
    int getBalancefactor(Node *);
    //void add(Patient c,Node* currentNode);*/
    Patient search(int value, Node* node);
    Patient searchBST(int);
    //bool remove(Node** node,int value);*
    Node * Delete(Node *T,Patient x)
    {
        Node *p;

        if(T == NULL)
        {
            return NULL;
        }
        else
            if(x.patientNo > T->a.patientNo)
            {
                T -> rightchild = Delete(T -> rightchild,x);
                if(getBalanceFactor(T) == 2){
                    if(getBalanceFactor(T -> leftchild) >= 0){
                        return rightRotate(T);
                    }
                    else{
                        T->leftchild = leftRotate(T->leftchild);
                        return rightRotate(T);
                    }
                }
            }
            else
                if(x.patientNo < T -> a.patientNo)
                {
                    T -> leftchild = Delete(T->leftchild,x);
                    if(getBalanceFactor(T)==-2) {
                        if(getBalanceFactor(T->rightchild)<=0)
                            return leftRotate(T);
                        else{
                            T->rightchild = rightRotate(T->rightchild);
                            return leftRotate(T);
                        }
                    }
                }
                else
                {
                    if(T -> rightchild != NULL)
                    {
                        p = T -> rightchild;

                        while(p -> leftchild != NULL)
                            p = p -> leftchild;

                        T -> a = p -> a;
                        T -> rightchild = Delete(T -> rightchild,p->a);

                        if(getBalanceFactor(T) == 2)
                            if(getBalanceFactor (T -> leftchild) >= 0)
                                return rightRotate(T);
                            else{
                                T->leftchild = leftRotate(T->leftchild);
                                return rightRotate(T);
                            }
                    }
                    else
                        return(T->leftchild);
                }
        T ->height = getHeight(T);
        return(T);
    }
};

#endif // BST_H
