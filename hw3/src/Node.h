/*c3-Node.h -- C++ Node class */
#ifndef _NODE_H_
#define _NODE_H_
#include "Data.h"

class Node
{
public:
        Node(int d):data(d),prev(0),next(0){}
//      ~Node();
        void setNext(Node*nNext){next = nNext;}
        void setPrev(Node*nPrev){prev = nPrev;}
        void removeNode();
        //void setFirstNode(Node *temp);
        //void addNodeAfter(int d);
        void addNodeBefore(int d); //Add node before this node.
        //Node* getNext();
        Node*getNext()const{return next;}
        Data getData()const{return data;}
private:
        Data data;
        Node *next;
        Node *prev;
};
#endif
