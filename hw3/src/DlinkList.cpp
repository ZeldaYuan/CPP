/*c3-DlinkList.cpp -- C++ DlinkList class functions*/
#include<iostream>
#include "Data.h"
#include "Node.h"
#include "DlinkList.h"
#include "Iterator.h"
//#include "Iterator.cpp"
using namespace std;
//******  Node class functions  ******//
/*void Node::addNodeAfter(int d)//Add node after this node.
{
 Node *nNode = new Node(d);
 nNode->next = this-> next;
 this->next->prev = nNode;
 nNode->prev = this;
 this->next = nNode;
}
void Node::removeNode() //Remove this node.
{
 this->prev->next = this->next;
 this->next->prev = this->prev;
 delete this;
}
Node* Node::getNext() //Get next node.
{
 Node* nextNode = this->next;
 return nextNode;
}

//******  DlinkList class functions ******/
Iterator* DlinkList::creatIterator() // Creat an iterator of the list
{
 return new Iterator(this->first);
}

void DlinkList::pushBackData(int d)  //add data at before(after) the first node
{
	Node*temp=new Node(d);
	//Iterator *itr = l.creatIterator();
	if(!first)
	  {
	  first = temp; // no first node,make temp the first node.
	  temp->setPrev(first);
	  temp->setNext(first);
	  }
	else
	  first->addNodeBefore(d);//Add node before first node,same as add at the end.
	/*while(! itr->isDone())
 {
    itr ++;
 }
 itr->getCurrentNode()->addNodeAfter(d);
 delete itr;*/
}
void DlinkList::print(DlinkList &l)  //Print out list
{
 if(!first)
 { return;}
 Iterator *itl = l.creatIterator();
 do
 {
  cout << itl->currentItem() << endl;
  itl->next();
 }
 while(!itl->isDone(l));
 /*for (itl->begin(), !itl = isDone();itl->next())
 {
  cout << itl->currentItem() << endl;

 //cout << itl->getCurrentNode()->getData().getx() << endl;
 }
  for(; it != e; ++it)
        std::cout << **it << "\n";
 */
 //delete itl;
 }
DlinkList::~DlinkList() //Delete the whole list
{
 Node*l = first;
 Node*m = 0;
 while(l)
 { m = l;
   l = l->getNext();
   delete m;
 }
}


