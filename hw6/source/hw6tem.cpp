//============================================================================
// Name        : hw6.cpp
// Author      : Zelda
// Version     : 20130410-20130419
// Copyright   : Homework 6 with mistake and note backup
// Description : C++ homework3 list class with template
//============================================================================

/*hw6.cpp Data template class,Node class& DLinkList class with DLinkList iterator */
#include<iostream>
//template <typename Type> //shouldn't add this,too many error
#include "Datatem.h"
#include "Nodetem.h"
#include "DlinkListtem.h"
//#include "DlinkList.cpp"
#include "Iteratortem.h"
//#include "Iterator.cpp"
using namespace std;
int main()
{
 DlinkList<int> li; //Add int instead of T
 int j,a[6]={0};
 cout<<"Please enter 6 int numbers :\n";
 for(int i = 0;i < 6;i++)
 {
  cin >> a[i];
  j = a[i];
  //cout << j <<" ";
  li.pushBackData(j);
 }
  li.print(li);
 //~DLinkList();  No need this
 return 0;
}

