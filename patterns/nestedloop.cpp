#include<iostream>
using namespace std;
int main(){
    int numberRows;
    cout<< "Enter no:"<<endl;
    cin>>numberRows;
    int numberColumn;
    cout<<"Enter no 2:"<<endl;
    cin>>numberColumn;
    for(int i=1;i<=numberRows;i++){
    for(int j=1;j<=numberColumn;j++){
    cout<<"*";
}
cout<<endl;
} 
}