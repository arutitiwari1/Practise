#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
    vector<pair<int,int>>vec={{1,2},{2,3},{3,4}};
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;// 1 2 ; 2 3 ;3 4
    }
    return 0;
}