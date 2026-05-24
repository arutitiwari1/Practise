#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    cout<< "enter no:"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%3==0){
            sum=sum+i;

        }
    } cout<< sum;
    return 0;
    
}