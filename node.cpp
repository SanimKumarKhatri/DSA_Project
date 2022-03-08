#include "node.h"

Node::Node(Patient b)
{
    this->a=b;
    this->rightchild=NULL;
    this->leftchild=NULL;
}

Node::~Node()
{

}

bool Node::hasLeftChild()
{
    return leftchild!=NULL;
}

bool Node::hasRightChild()
{
    return rightchild!=NULL;
}

bool Node::isLeaf()
{
    return !hasLeftChild()&&!hasRightChild();
}
