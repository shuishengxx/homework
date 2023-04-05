#include <iostream>
 int main()
 {
    int a[7]={1,4,5,6,2,3,5};
    int i=0,j=0;
    int b[6]={1,4,6,2,3,5};
    int temp=a[0];
    for(i=1;i<7;++i){
        temp=temp^a[i];
    }
    int temp2=b[0];
    for(j=1;j<6;++j){
        temp2=temp2^a[j];
    }
    int result = temp^temp2;
    cout <<"result:"<<result;
    return 0;
 }