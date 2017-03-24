/*hw6-DlinkList6.h -- C++  DlinkList class */
#ifndef _DLINKLISTTEM_H_
#define _DLINKLISTTEM_H_
#include "Node6.h"
#include "Iterator6.h"

template < typename Type >
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

