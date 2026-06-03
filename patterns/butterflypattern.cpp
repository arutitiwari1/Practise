#include<iostream>
using namespace std;
int main(){       //print=butterflypattern
    int n;
    cout<<"eneter no:";
    cin>>n;
    for(int p=1;p<=n;p++){
    for(int i=1;i<=p;i++)
    {
        cout<<"*";
    }
    for(int j=1;j<=2*(n-p);j++)//spaces
    {
        cout<<" ";
    }
    for(int k=1;k<=p;k++)
    {
        cout<<"*";
    }
    cout<<endl;
}
    //lower half
    for(int q=(n-1);q>=1;q--)
    {
        for(int i=1;i<=q;i++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*(n-q);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=q;k++)
        {cout<<"*";}
        cout<<endl;
    }
    return 0;

}            