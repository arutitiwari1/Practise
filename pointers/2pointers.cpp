#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a=10;
    int *ptr=&a;
    int **parPtr=&ptr;
    cout<<&ptr<<endl;//0x61ff04
    cout<<parPtr<<endl;//0x61ff04
    return 0;
}