#include<iostream>
using namespace std; //convert decimal to binary
int decToBinary(int decNum){
    int ans=0;
    int pow=1;
    while(decNum>0){
        int rem =(decNum%2);
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;   //binary no
}int main(){
    int decNum=50; //110010
    cout<<decToBinary(decNum)<<endl;
    return 0;
}