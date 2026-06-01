#include<iostream>
using namespace std;
int main (){                              //print->aaaa; bbb;  cc;   d
    int n;
    cout<<"enter no:";
    cin>>n;
    char ch='A';
    //spaces
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        //print character 
        for(int j=0;j<n-i;j++)
        {
            cout<<(char)(ch+i);
        }
        //next line
        cout<<endl;
        
    } 
    return 0;
}