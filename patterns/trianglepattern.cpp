#include<iostream>
using namespace std;
int main (){
    int n;
    cout<< "Enter no:";
    cin>>n;
    
    
        for (int i=0;i<n;i++)             //inner loop n+1 print=*  i=0;j=i+1=1
        {                                                       //** i=1;j=i+1=2
            for (int j=0;j<i+1;j++)                            //*** i=2;j=i+1=3
            {
                cout<<"*";
            } cout<<endl;
        } return 0;
    }

