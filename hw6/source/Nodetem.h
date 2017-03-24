/*hw6-Nodetem.h -- C++ Node class */
#ifndef _NODETEM_H_
#define _NODETEM_H_
#include "Datatem.h"
template <typename Type>
class Node
{
public:
        Node<Type>(Type d):data(d),prev(0),next(0){}
        ~Node<Type>();
        void setNext(Node<Type>*nNext){next = nNext;}
        void setPrev(Node<Type>*nPrev){prev = nPrev;}
        void removeNode();
        //void setFirstNode(Node *temp); //Try to setFirst node.
        //void addNodeAfter(int d); //Backup another function
        void addNodeBefore(Type d); //Add node before this node.
        //Node* getNext();
        Node<Type>*getNext()const{return next;}
        Data<Type> getData()const{return data;}
private:
        Data<Type> data;
        Node<Type> *next;
        Node<Type> *prev;
};
#endif
