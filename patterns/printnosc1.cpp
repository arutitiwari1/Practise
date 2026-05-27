#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no:";
    cin>>n;                          //print 123
                                       //   456
                                          //789
    int num=1;
    for( int i=1;i<=n;i++)
    {
        for( int j=1;j<=n;j++)
        {
        cout<<num<<"";
        num++;
        }
        cout<<endl;

        
    } cout<< "after pattern:"<< num<<endl;      //print 10
    return 0;
}