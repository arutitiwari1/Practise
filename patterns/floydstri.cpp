#include<iostream>       //print=1;23;456;78910
using namespace std;
int main (){
int num=1;
int n; 
cout<<"enter no:";
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=i+1;j>0;j--)
    {
        cout<<num<<" ";
        num++;
    }
    cout<<endl;
}return 0;

}