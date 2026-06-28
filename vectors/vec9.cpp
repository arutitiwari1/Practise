#include<iostream>
#include<vector>
using namespace std;//use of pop back lasr element gyb
int main(){
    vector<int>vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<<"after push back size="<<vec.size()<<endl;//3
    vec.pop_back();
    cout<<vec.back()<<endl;//35
    return 0;
}