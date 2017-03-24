/*hw6-Iteratortem.h -- Iterator class */
//#include "DlinkList.h"
//using namespace std;
#ifndef _ITERATORTEM_H_
#define _ITERATORTEM_H_
#include "Nodetem.h"
//#include "DlinkList.h"
using namespace std;
template < typename Type > //Shouldn't miss this
class DlinkList;
template < typename Type >  //Shouldn't miss this
class Iterator
{
public:
        Iterator<Type>(Node<Type> *n):cur(n){}//head(0){}
        void begin(){cur = 0;}
        //void operator ++(int){cur = cur->getNext();}
        void next(){cur = cur->getNext();} //cur->getNext()
        bool isDone(DlinkList<Type> &li);
       // Node*getCurrentNode(){return cur;}
        Type currentItem(){return cur->getData().getx();} //Change from int to Type
  //      ~DlIterator();
private:
        Node<Type> *cur;
        //Node *head;
};
#endif
