#include<iostream>
using namespace std;
int main (){
      int n;
      cout<<"enter no:";
      cin>>n;
      for(int i=1;i<=n;i++)
      { char ch='A';
        for(int j=1;j<=n;j++)
        { 
        cout<< ""<< ch ;
        ch++;
        } cout<<endl;        //and nhi rkhogi ise toh ans ek line me hi print hoga!!!!
      }
      
      return 0;

}

