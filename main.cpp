#include <iostream>
using namespace std;

#include "safeArray.h"
int main(){
    cout<<"安全数组：随意输入整型元素和元素的位置，直到位置输入小于零的数结束"<<endl;
    SafeArray num;
    int element;
    int loc;
    while(1){
        cin>>element>>loc;
        if(loc<0){
            break;
        }
        num[loc]=element;
    }
    for(int i=0;i<num.maxSize;i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
