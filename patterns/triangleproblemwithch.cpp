#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter no:";                  //print=A;BC;DEF;GHIJ
    cin>>n;
    char ch='A';
    for(int i=0;i<=n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<(ch++);
        } cout<<endl;
    } 
    return 0;
}