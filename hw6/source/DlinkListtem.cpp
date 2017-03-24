/*hw6-DlinkListtem.cpp -- C++ DlinkList class functions*/
#include<iostream>
//using namespace std;
#include "Datatem.h"
#include "Nodetem.h"
#include "DlinkListtem.h"
#include "Iteratortem.h"
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
template < typename Type > //Should be here
Iterator<Type> *DlinkList<Type>::creatIterator() // Creat an iterator of the list
{
 return new Iterator<Type>(this->first);
}
template < typename Type > //Should be here
void DlinkList<Type>::pushBackData(Type d)  //add data at before(after) the first node
{
	Node<Type>*temp=new Node<Type>(d); //Miss last Type
	//Iterator *itr = l.creatIterator();
	if(!first)
	  {
	  first = temp; // no first node,make temp the first node.
	  temp->setPrev(first);
	  temp->setNext(first);
	  }
	else
	  first->addNodeBefore(d);//Add node before first node,add at the end.
	/*while(! itr->isDone())
 {
    itr ++;
 }
 itr->getCurrentNode()->addNodeAfter(d);
 delete itr;*/
}
template <typename Type>  //have to add this line
void DlinkList<Type>::print(DlinkList<Type> &l)  //Print out list
{
 if(!first)
 { return;}
 Iterator<Type> *itl = l.creatIterator();
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
/*DlinkList<Type>::~DlinkList() //Delete the whole list,miss <Type>
{
 Node<Type>*l = first;
 Node<Type>*m = 0;
 while(l)
 { m = l;
   l = l->getNext();
   delete m;
 }
}*/


