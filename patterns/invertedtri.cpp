#include<iostream>
using namespace std;
int main(){                //print=1111; 222;  33;   4
    //space
    int n;                     //space or num notice kro bus
    cout<<"enter no:";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++) {
            cout<<" ";
        }
        //numbers
        for(int j=0;j<(n-i);j++){
            cout<<(i+1);
        } 
        cout<<endl;
    }
    return 0;
}