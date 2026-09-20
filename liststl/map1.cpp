#include<iostream>
#include<stack>
#include<map>
using namespace std;
int main(){
map<string,int>m;
m["tv"]=100;
m["laptop"]=100;
m["headphones"]=50;
for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;// h 50 ; l 100 ; t 100 h first l sec t third
}
return 0;
}