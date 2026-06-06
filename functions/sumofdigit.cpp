#include<iostream>
using namespace std;
int sumOfDigit(int num){
    int digsum=0;
    while(num>0){
        int lastdig =num%10;
        num/=10;
        digsum+=lastdig;
    } 
    return digsum;   
}
int main (){
    cout<<"sum="<<sumOfDigit(2345)<<endl;//14
    return 0;
}
