#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<< "Enter number A ->"<< endl;
    cin>> a;
  
  
  
      cout<< "Enter number B ->"<<endl;
    cin>>b;
    if (a%b==0){
        cout <<a<< " is divisible by "<<b;
    } else{

        cout <<a<< " is not divisible by "<<b;
    }
    return 0;
}
