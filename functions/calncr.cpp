#include<iostream>
using namespace std;
int factorial(int n){//print normal fact
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n/fact_r*fact_nmr;   //rem formula
}
int main(){
    int n=6,r=3;    //720
    cout<<ncr(n,r)<<endl;
}