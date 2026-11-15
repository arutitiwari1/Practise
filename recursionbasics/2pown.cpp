#include<iostream>
using namespace std;
int pow(int n){
    //base case
    if(n==0){
        return 1;
    }
    //RR
    int sp=pow(n-1);
    int bp=2*sp;
    return bp;
}
int main(){
    int n;
    cin>>n;
    int ans=pow(n);
    cout<<ans<<endl;
    return 0;
}