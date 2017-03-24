/*homework6-Data6.h -- C++ Data template class */
#ifndef _DATATEM_H_
#define _DATATEM_H_
template <class Type>
class Data
{
public:
        Type getx()const{return x;} //Replace all int by T.
        Data(Type i):x(i){}
        ~Data(){}
private:
        Type x;
};
#endif
