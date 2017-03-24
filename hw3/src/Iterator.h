/*c3-Iterator.h -- Iterator class */
//#include "DlinkList.h"
//using namespace std;
#ifndef _ITERATOR_H_
#define _ITERATOR_H_

#include "Node.h"
//#include "DlinkList.h"
using namespace std;
class DlinkList;
class Iterator
{
public:
        Iterator(Node *n):cur(n){}//head(0){}
        void begin(){cur = 0;}
        //void operator ++(int){cur = cur->getNext();}
        void next(){cur = cur->getNext();} //cur->getNext()
        bool isDone(DlinkList &li);
       // Node*getCurrentNode(){return cur;}
        int currentItem(){return cur->getData().getx();}
  //      ~DlIterator();
private:
        Node *cur;
        //Node *head;
};
#endif
