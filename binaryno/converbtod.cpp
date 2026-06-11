#include<iostream>
using namespace std;
int binToDecimal(int binNum){
    int ans=0;
    int pow=1;
    while(binNum>0){
        int rem=(binNum%10);
        ans+=(rem*pow);
        pow*=2;
        binNum/=10;
    }
    return ans; //decimal form
}
int main(){
    cout<<binToDecimal(1010)<<endl;//10
    return 0;
}