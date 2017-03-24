/*c3-Data.h -- C++ Data class */
#ifndef _DATA_H_
#define _DATA_H_

class Data
{
public:
        int getx()const{return x;}
        Data(int i):x(i){}
//      ~Data(){}
private:int x;
};
#endif

/*
//.h is the define,
.m is the codem
object C,@interface ,below is property
.
Before cannot move to .h,is missing @interface,
.m click interface. Define a class and father of this class.

change from base class to subclass is OK, change subclass to base class is not OK.
if let cell is ofern use in swift,!,if cannot change, program crash. ? means if cannot change, execute {} function

- is the member function in class,+ is static function in object C

if indexPath.row % 2==0{    //if it is ou shu line,...
cell.setAvatar...
else                        //if it is ji shu line...

Dlog function is which function load this,print the name for this function
func: DLog(function:String=__FUNCTION
overwrite func viewDidDisappear //overwrite means it is not my function,it belong to father class
        //List all the function related to view lifecycle.
    //command plus left right arrow rotate
//view enter background did enter background

 View transition   Father class UIViewController
//push is slide from side,keep top line not move
Model is, new view cover the whole before view from bottom
//Datil(iPad) is the action in iPad,left index,right display(two table view)
popover(iPad) is not iphone use.
iPhone doesn't have detail and popover(because it is small)

When we push,we need the navigation to push.use back to go back

Model can choose the direction, default from bottom,you can choose left..

UITabBarController   //help you control no more than 5 view controller,it organize every view controller
1 No more than 5 child view controllers
2 Each one function separately 
T
find a node,tell next view. Int the main view controller.
 DestinationViewController is the thing prepareForSegue for.






