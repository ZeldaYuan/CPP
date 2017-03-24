/*hw6-Iterator6.cpp --C++ Iterator class functions*/
#include<iostream> 
//template <typename Type> // should not be here
#include "Iterator6.h"
#include "DlinkList6.h"
#include "Node6.h"
using namespace std;
template < typename Type >
	bool Iterator<Type>::isDone(DlinkList<Type> &li)
	{
	    if (cur == li.getFirst())
	        return true;
	    else return false;
	}
