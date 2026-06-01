#include<iostream>
using namespace std;
int main(){
    int n;            //print      1
    cout<<"enter no->";     //    121
    cin>>n;                 //   12321
    //spaces
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            cout<<" ";
        }
        //print no 1
        for( int j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        //print no 2
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;


}