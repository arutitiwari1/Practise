#include<iostream>
using namespace std;
int printHello(){
    cout<<"hello\n";
    return 3;
}
int main(){
    //function call /invoke
    cout<<printHello()<<endl;
    return 0;      //print=hello;3
}