#include<iostream>
using namespace std;
int main (){
    int n;
    int fac=1; 
             //n!=1*2*3...n
    cout<<"enter n";
    cin>> n;
    for(int i=1;i<=n;i++)
    { fac= fac*i;
          
    }
    cout<< "factorail:"<< fac << endl; 
    return 0;
    
    
}