//============================================================================
// Name        : hw3.cpp
// Author      : Zelda
// Version     : 2013-04-10(2013-01-02)
// Copyright   : C++ Homework 3
// Description : Main for Data Node & DlinkList class with DlinkList iterator
//============================================================================

/*c3.cpp Data class Node class& DLinkList class with DLinkList iterator */
#include<iostream>
#include "Data.h"
#include "Node.h"
#include "DlinkList.h"
//#include "DlinkList.cpp"
#include "Iterator.h"
//#include "Iterator.cpp"
using namespace std;
int main()
{
 DlinkList li;
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
