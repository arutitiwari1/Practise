#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<char>vec={'a','b','c','d','e'};
   cout<<"size="<<vec.size()<<endl; //5
   for(char val:vec){//for each loop
    cout<<val<<endl;// a;b;c;d;e
   }
   return 0;
}