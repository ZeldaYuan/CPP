//============================================================================
// Name        : hw6.cpp
// Author      : Zelda
// Version     : 20130421
// Copyright   : Homework 6
// Description : C++ homework6 list class with template
//============================================================================

/*hw6.cpp Data template class,Node class& DLinkList class with DLinkList iterator */
#include<iostream>
#include "Data6.h"
#include "Node6.h"
#include "DlinkList6.h"
#include "Iterator6.h"
using namespace std;
int main()
{
 DlinkList<int> lis; //Add int instead of T
 int j,a[6]={0};
 cout<<"Please enter 6 int numbers :\n";
 for(int i = 0;i < 6;i++)
 {
  cin >> a[i];
  j = a[i];
  //cout << j <<" ";
  lis.pushBackData(j);
 }
  lis.print(lis);
  return 0;
}

