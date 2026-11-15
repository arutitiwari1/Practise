#include<iostream>
using namespace std;
void saythedigit(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    //rc
    saythedigit(n,arr);
    cout<<arr[digit];/// end me hi vrna cout i reverse print hoga
}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    saythedigit(n,arr);
    cout<<endl;
    return 0;
}