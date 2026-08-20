#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;//0
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.pop_back();
    for(int val:vec){
        cout<<val<<" ";// 1 2
    }
    cout<<endl;
    cout<<"val at idx 2:"<<vec[1]<<"or"<<vec.at(1)<<endl;//both are same 2 2
    return 0;
}