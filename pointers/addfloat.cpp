#include<iostream>//print address of float..
#include<vector>
using namespace std;
int  main(){
    float price=100.25f;
    float * ptr=&price;
    cout<<&ptr<<endl;//0x61ff08
    cout<<ptr<<endl;//ox61ff0c
    return 0;
}