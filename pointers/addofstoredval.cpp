#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **parPtr=&ptr;
    cout<<**(parPtr)<<endl;//10
    cout<<*(parPtr)<<endl;//0x61ff0c
    cout<<&(parPtr)<<endl;//0x61ff04
    return 0;
}