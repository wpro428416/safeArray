#ifndef SAFEARRAY_H_INCLUDED
#define SAFEARRAY_H_INCLUDED

class SafeArray
{
private:


public:int maxSize;int * Array;
    SafeArray();
    ~SafeArray();
    void append(int element,int loc);
    void isFull(int loc);
    //void addSize();
};

#endif // SAFEARRAY_H_INCLUDED
