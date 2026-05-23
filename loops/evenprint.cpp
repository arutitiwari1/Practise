#include<iostream>
using namespace std;
int main(){
    int start;
    int stop;
    cout<<"Enter starting no:"<<endl;
    cin>> start;
    cout<< "Enter ending digit"<<endl;
    cin>>stop;

    for(int i=start; i<=stop;i++)
    {
        if(i%2==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
    