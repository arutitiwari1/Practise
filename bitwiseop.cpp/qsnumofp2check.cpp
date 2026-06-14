#include<iostream>
using namespace std;
bool (isPowerOfTwo(int n))
{
    return n>0 && (n&(n-1))==0;
} 
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    if(isPowerOfTwo(n))
    {cout<<"power of two";}
    else{cout<<"not a power of two";
    }
    return 0;
} 