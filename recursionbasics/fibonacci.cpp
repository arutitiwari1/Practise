#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    //RR
    int sp=fibo(n-2);
    int bp=fibo(n-1)+sp;
    return bp;
}
int main(){
    int n;
    cin>>n;
    int ans=fibo(n);
    cout<<ans<<endl;
    return 0;
}