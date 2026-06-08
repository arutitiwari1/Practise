#include<iostream>
using namespace std;
// f1 to check single no is prime
bool isPrime(int num){
   if (num<=1)
   return false;
   if (num==2)
   return true;
   if (num%2==0)
   return false;
   for(int i=3;i*i<=num;i+=2)
   {
    if (num%i==0)
    return false;
   } 
   return true;  
}
//f2 print all prime no upto n
void printPrimeUpToN(int n){
    for(int i=2;i<=n;i++){
        if (isPrime(i))
        {
            cout<<i<<" ";

        }
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    cout<<"prime no  up to n:"<<n<<"are\n";
    printPrimeUpToN(n);    //printallprimetilln
    return 0;
}