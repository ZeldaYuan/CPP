/*hw6-DlinkListtem.h -- C++  DlinkList class */
#ifndef _DLINKLISTTEM_H_
#define _DLINKLISTTEM_H_
//template <typename Type> //Shouldn't be here
#include "Nodetem.h"
#include "Iteratortem.h"
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
template < typename Type > //Should be here
class DlinkList
{
public:
	    template <typename Typ>// After check google error,find have to use another typename
        friend class Iterator;
        DlinkList<Type>():first(0){}
       // ~DlinkList<Type>();
        void pushBackData(Type d);
        Node<Type> *getFirst(){return first;}
        Iterator<Type>* creatIterator();
        void print(DlinkList<Type> &l);
private:
        Node<Type> *first;
};
#endif
