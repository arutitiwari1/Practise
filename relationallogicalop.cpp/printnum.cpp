#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter no:";
    cin>>n;
    int e;
    cout<<"Ending no:";
    cin>>e;
    for(int i=n; i<=e;i=i+2)
    {   
        cout<< i <<endl;
    } 
    return 0;

}
