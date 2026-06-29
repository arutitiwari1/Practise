#include<iostream>
#include<vector>
using namespace std;
int main(){//use of at at vec
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"after push back size="<<vec.size()<<endl;//3
    vec.pop_back();//45
    cout<<vec.at(0)<<endl;//25
    return 0;
}