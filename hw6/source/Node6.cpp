/*hw6-Node6.cpp --C++ Node class functions*/
#include<iostream>
using namespace std;
#include "Data6.h"
#include "Node6.h"

template <typename Type>
void Node<Type>::addNodeBefore(Type d) //Add node before this node.
{
	Node<Type> *nNode = new Node<Type>(d); 
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

