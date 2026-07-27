#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *ptr1;
    int *ptr2;
    cout<<ptr1<<endl;//0x401aab
    cout<<ptr2<<endl;//0x61ff54
    cout<<(ptr1<ptr2);//1
    return 0;
}