#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size="<<vec.size()<<endl;//0
    vec.push_back(25);
    cout<<"after push back size="<<vec.size()<<endl;//1
    for(int val:vec){//for each loop
        cout<<val<<endl;//25
    }
    return 0;
}