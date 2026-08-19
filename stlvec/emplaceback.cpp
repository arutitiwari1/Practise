#include<iostream>// stl vec=emplace back
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.emplace_back(5);//similar to push back
    for(int val:vec){
        cout<<val<<" ";// 1 5
    }
    cout<<endl;
    return 0;
}