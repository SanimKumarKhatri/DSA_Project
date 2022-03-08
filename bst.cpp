#include "bst.h"
#include <QDebug>

BST::BST()
{
    root=NULL;
}

void BST::add(Patient c, Node* currentNode){
    if(c.patientNo> currentNode->a.patientNo){
        if(currentNode->hasRightChild())
            add(c, currentNode->rightchild);
        else
            currentNode->rightchild = new Node(c);
    }
    else if(c.patientNo<currentNode->a.patientNo){
        if(currentNode->hasLeftChild())
            add(c,currentNode->leftchild);
        else
            currentNode->leftchild=new Node(c);
    }
}

bool BST::search(int value, Node *node){
    if(node!=NULL){
        if(value>node->a.patientNo)
            return search(value, node->rightchild);
        else if(value<node->a.patientNo)
            return search(value, node->leftchild);
        else
            return true;
    }
    return false;
}

bool BST::remove(Node **node, int value){
    if(*node!=NULL){
        if((*node)->a.patientNo==value){
            if((*node)->isLeaf()){
                delete (*node);
                (*node)=NULL;
            }
            else if(!(*node)->hasLeftChild()&& !(*node)->hasRightChild()){
                Node* aux =(*node);
                (*node) = aux->rightchild;
                aux->rightchild=NULL;
                        delete aux;
            }
            else if(value>(*node)->a.patientNo){
                return remove(&(*node)->rightchild, value);
            }
            else if(value<(*node)->a.patientNo){
                return remove(&(*node)->leftchild, value);
            }
        }
    }
    return false;
}

bool BST::isEmpty(){
    return root== NULL;
}
