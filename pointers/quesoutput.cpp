#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    int **q=&p;
    cout<<p<<endl;//&a//0x61ff08
    cout<<*q<<endl;//&a//"
    cout<<&a<<endl;//"
    return 0;
}