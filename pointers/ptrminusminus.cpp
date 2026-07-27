#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;//0x61fef4
    ptr--;//-4
    cout<<ptr<<endl;//0x61fef0
    return 0;
}