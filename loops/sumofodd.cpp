#include<iostream>
using namespace std;
int main (){
    int n; 
    int oddsum=0;
    cout<< "enter no:"<< endl;
    cin>>n ;
    for(int i=1;i<=n;i++){
        if (i%2!=0)   //sum of odd ajayega condition lagii hui h
        oddsum =i+oddsum;
    }
    cout<< oddsum<<endl;
    return 0;
}