#include<iostream>
using namespace std;
int main(){
    int n =35 ;
    
    
    
    int sum=0;
    for( int i=1; i<=n; i++){
        (sum+=i);
        if (i==9)
        
        {break;
        }
    }
        
        cout<< "sum:"<<sum;
        return 0;

}