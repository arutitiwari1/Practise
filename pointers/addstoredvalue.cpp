#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    cout<<*(&a)<<endl;//10
    cout<<*(ptr)<<endl;//10
    return 0;
}