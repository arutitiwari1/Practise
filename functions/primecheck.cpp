#include<iostream>
using namespace std;
bool isPime(int n){
    //no less than or equal to 1 are not prime
    if(n<=1){
    return false;
    }
    //even no excpt 2 are non prime
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2)
    {
       if (n%i==0)
        {
            return false;
        }
    }return true;
}
int main(){
    int num;
    cout<<"enter no:";
    cin>>num;
    if (isPime(num)){
        cout<<"prime"<<num<<endl;

    }else{
       cout<<"not prime"<<num<<endl;  
    }
    return 0;
}
