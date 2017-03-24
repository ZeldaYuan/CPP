/*hw6-DlinkList6.cpp -- C++ DlinkList class functions*/
#include<iostream>
#include "Data6.h"
#include "Node6.h"
#include "DlinkList6.h"
#include "Iterator6.h"
using namespace std;

//******  DlinkList class functions ******/
template < typename Type >
Iterator<Type> *DlinkList<Type>::creatIterator() // Creat an iterator of the list
{
 return new Iterator<Type>(this->first);
}
template < typename Type >
void DlinkList<Type>::pushBackData(Type d)  //add data at before(after) the first node
{
	Node<Type>*temp=new Node<Type>(d); 
	if(!first)
	  {
	  first = temp; // no first node,make temp the first node.
	  temp->setPrev(first);
	  temp->setNext(first);
	  }
	else
	  first->addNodeBefore(d);//Add node before first node,add at the end.
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


