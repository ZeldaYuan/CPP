/*hw6-Nodetem.cpp --C++ Node class functions*/
#include<iostream>
using namespace std;
#include "Datatem.h"
#include "Nodetem.h"
//using namespace std;
//******  Node class functions  ******//
/*void Node::setFirstNode(Node *temp) //Set temp node as first node.
{
	  first = temp; //make temp the first node.
	  temp->prev = first;
	  temp->next = first;
	  //return;
}*/
/*void Node::addNodeAfter(int d)//Add node after this node.
{
 Node *nNode = new Node(d);
 nNode->next = this-> next;
 this->next->prev = nNode;
 nNode->prev = this;
 this->next = nNode;
}*/
template <typename Type>
void Node<Type>::addNodeBefore(Type d) //Add node before this node.
{
	Node<Type> *nNode = new Node<Type>(d); //Miss last Type
	nNode->prev = this->prev;
	this->prev->next = nNode;
	nNode->next = this;
	this->prev = nNode;
}
template <typename Type>
void Node<Type>::removeNode() //Remove this node.
{
 this->prev->next = this->next;
 this->next->prev = this->prev;
 delete this;
}
/*Node* Node::getNext() //Get next node.
{
 Node* nextNode = this->next;
 return nextNode;
}*/

