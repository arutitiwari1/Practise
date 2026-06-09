#include<iostream>
using namespace std;
void printNthFibonacci(int n){
    
    if(n<0){
        cout<<"Please enter non negative integer:"<<endl;
        return ;
    }


if (n==0){
    cout<<0<<endl;
    return;
}
if (n==1){
    cout<<1<<endl;
    return;
}
int a=0,b=1,c;
for(int i=0;i<n;i++){
    c=a+b;
    a=b;
    b=c;
    cout<<a;
}
cout<<endl;
}
int main(){
    printNthFibonacci(10);
    return 0;
}
