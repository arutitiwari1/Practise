#include<iostream>
using namespace std;
int main(){
    int n;                              //print=hollowdiamond
    cout<<"Enter no:";
    cin>>n;
    for(int i=0;i<n;i++)
    {//top part
        //spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0;j<(2*i-1);j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    //bottom
    for(int i=(n-2);i>=0;i--)
    //spaces
    {
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
          //spaces
        if(i!=0)
        {
            for(int j=0;j<2*i-1;j++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}