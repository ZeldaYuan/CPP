/*c3-Iterator.cpp --C++ Iterator class functions*/
#include<iostream>
//using namespace std;
#include "Iterator.h"
#include "DlinkList.h"
#include "Node.h"
using namespace std;
//******  Iterator class functions  ******//
/*bool Iterator::isDone(DlinkList &li)
{
	/*if{ cur == li.getFirst();
	    return true;
	  }
	else return false;
	{cur==li.getFirst();}--no stop*/
	bool Iterator::isDone(DlinkList &li)
	{
	    if (cur == li.getFirst())
	            return true;
	    else return false;
	}
