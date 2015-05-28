#include "safeArray.h"

SafeArray::SafeArray(){
    maxSize=10;
    Array=new int[10];
    for(int i=0;i<maxSize;i++){
        Array[i]=0;
    }
}

SafeArray::~SafeArray(){
    delete[] Array;
}

void SafeArray::isFull(int loc){
    if(loc>=maxSize){
        maxSize+=loc;
        int * newArray=new int[maxSize];
        for(int i=0;i<maxSize;i++){
            if(i<maxSize-loc){
                newArray[i]=Array[i];
            }
            else{
                newArray[i]=0;
            }
        }
        Array=newArray;
    }

}

int & SafeArray::operator[](int loc){
    isFull(loc);
    return Array[loc];
}

//int SafeArray::operator<<(int num){}
//void SafeArray::addSize(){
//
//}
