/*c3-DlinkList.h -- C++  DlinkList class */
#ifndef _DLINKLIST_H_
#define _DLINKLIST_H_
#include "Node.h"
#include "Iterator.h"
//#include "Iterator.cpp"

/*class Data
{
public:
        int getx()const{return x;}
        Data(int i):x(i){}
//      ~Data(){}
private:int x;
};
class Node
{
public:
        Node(int d):data(d),prev(0),next(0){}
//      ~Node();
        void removeNode();
        void addNodeAfter(int d);
        Node* getNext();
        Data getData()const{return data;}
private:
        Data data;
        Node *next;
        Node *prev;
};*/

class DlinkList
{
public:
        friend class Iterator;
        DlinkList():first(0){}
        ~DlinkList();
        void pushBackData(int d);
        Node *getFirst(){return first;}
        Iterator* creatIterator();
        void print(DlinkList &l);
private:
        Node *first;
};
#endif
