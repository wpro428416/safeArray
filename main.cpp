#include <iostream>
using namespace std;

#include "safeArray.h"
int main(){
    cout<<"��ȫ���飺������������Ԫ�غ�Ԫ�ص�λ�ã�ֱ��λ������С�����������"<<endl;
    SafeArray num;
    int element;
    int loc;
    while(1){
        cin>>element>>loc;
        if(loc<0){
            break;
        }
        num.append(element,loc);
    }
    for(int i=0;i<num.maxSize;i++){
        cout<<num.Array[i]<<endl;
    }
    return 0;
}
