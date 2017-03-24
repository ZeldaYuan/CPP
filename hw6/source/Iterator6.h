/*hw6-Iterator6.h -- Iterator class */
#ifndef _ITERATORTEM_H_
#define _ITERATORTEM_H_
#include "Node6.h"
using namespace std;
template < typename Type >
class DlinkList;
template < typename Type >
class Iterator
{
public:
        Iterator<Type>(Node<Type> *n):cur(n){}
        void begin(){cur = 0;}
        void next(){cur = cur->getNext();} 
        bool isDone(DlinkList<Type> &li);
        Type currentItem(){return cur->getData().getx();} //Change from int to Type
        //~DlIterator<Type>();
private:
        Node<Type> *cur;
     };
#endif
