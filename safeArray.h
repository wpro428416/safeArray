#ifndef SAFEARRAY_H_INCLUDED
#define SAFEARRAY_H_INCLUDED

class SafeArray
{
private:
    int * Array;

public:
    int maxSize;
    SafeArray();
    ~SafeArray();
    int &operator[](int loc);
    //int operator<<(int num);
    void isFull(int loc);
    //void addSize();
};

#endif // SAFEARRAY_H_INCLUDED
