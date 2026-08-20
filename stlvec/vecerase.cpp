#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    vec.erase(vec.begin()+1,vec.begin()+3);//[start,end)
    for(int val:vec){
        cout<<val<<" ";//1 4 5
    }cout<<endl;
    return 0;
}