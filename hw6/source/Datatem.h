/*homework6-Datatem.h -- C++ Data template class */
#ifndef _DATATEM_H_
#define _DATATEM_H_
template <class Type>  //Another template error make here has error
class Data
{
public:
        Type getx()const{return x;} //Replace all int by T.(error: declaration of ‘class T’)
        Data(Type i):x(i){}
//      ~Data(){}
private:
        Type x;
};
#endif

