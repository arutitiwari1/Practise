#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no [column]:"<<endl;   //line you want
    cin>>n;                              
    int m;
    cout<<"enter no [row]:"<<endl;    //what in line you want to print
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
        {
            cout<<""<<j;
        }
     
    cout<<endl;
    }
    return 0;
}