#include<iostream>
using namespace std;
int printHello(){
    cout<<"hello\n";
    return 3;
}
int main (){
    //fu nction call/ invoke
    int val=printHello();
    cout<<"val="<<val;
    return 0;
}