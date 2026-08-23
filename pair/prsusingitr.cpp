#include<iostream>// pair use of emplace back push back
#include<vector>
#include<deque>
using namespace std;
int main(){
vector<pair<int,int>>vec={{1,2},{2,3},{3,4}};
vec.push_back({4,5}); // insert
vec.emplace_back(4,5);//in place object creates
for(auto p:vec){
    cout<<p.first<<" "<<p.second<<endl;// 1 2 ; 2 3 ; 3 4 ;4 5 ; 4 5
}
cout<<endl;
return 0;
}