#include<iostream>
using namespace std; //a++ ya ++a are diff a++ ka matlb phele kam phir update ++a vice versa
int main(){
    int a=10;
    int b=a++;
    cout<< a<< endl; // 11 kaam hua b me phir udate hua a
    cout<<b << endl; // 10
   // int a=10;
   // int b=++a;
    //cout<<a<<endl; //11
   // cout<<b<<endl; //11 update phele kam bdh me
    return 0;
}