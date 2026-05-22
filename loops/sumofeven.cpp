#include<iostream>
using namespace std;
int main(){
    int n;
    int sumEven=0;
    cout<< "Enter no:"<<endl;
    cin>> n;
    for ( int i=1;i<=n;i++){
        if(i%2==0)
        sumEven = sumEven+i;    
        
    }
    cout<< sumEven<< endl;
    return 0;


}