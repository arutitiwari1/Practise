#include<iostream>// pair in pair
#include<vector>
#include<deque>
using namespace std;
int main(){
    pair<int,pair<char,int>>p={1,{'a',3}};
    cout<<p.first<<endl;//1
    cout<<p.second.first<<endl;//a
    cout<<p.second.second<<endl;//3
    return 0;
}