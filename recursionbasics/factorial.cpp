#include<iostream>
using namespace std;
int fac(int n){
    //base  case
    if(n==0){
        return 1;
    }
    //RR
    int smallerproblem=fac(n-1);
    int biggerproblem=n*smallerproblem;
    return biggerproblem;
}
int main(){
    int n;
    cin>>n;
    int ans=fac(n);
    cout<<ans;
    return 0;
}