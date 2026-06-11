#include<iostream>
using namespace std;
int decToBinary(int decNum){  //convert decimal to binary print 1 to 10 all
 int ans=0;
 int pow=1;
    while (decNum>0){
        int rem=(decNum%2);
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;//binary form   
}
int main(){
    int decNum=10;
    for(int i=0;i<=10;i++){  //print 1;10;11;100;101;110;111;1000;1001;1010
        cout<<decToBinary(i)<<endl;
    }
    return 0;
}