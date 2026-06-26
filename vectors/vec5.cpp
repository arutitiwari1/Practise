#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(5,0);
    for(int i:vec){//for each loop
        cout<<i<<endl;//0;0;0;0;0
    }
    return 0;
}