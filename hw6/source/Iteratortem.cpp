/*hw6-Iteratortem.cpp --C++ Iterator class functions*/
#include<iostream> 
//template <typename Type> //Too many error with here!!!
//using namespace std;  //Doesn't matter here
#include "Iteratortem.h"
#include "DlinkListtem.h"
#include "Nodetem.h"
using namespace std;
//******  Iterator class functions  ******//
/*bool Iterator::isDone(DlinkList &li)
{
	/*if{ cur == li.getFirst();
	    return true;
	  }
	else return false;
	{cur==li.getFirst();}--no stop*/
  template < typename Type > //Should be here!!!
	bool Iterator<Type>::isDone(DlinkList<Type> &li)
	{
	    if (cur == li.getFirst())
	            return true;
	    else return false;
	}
