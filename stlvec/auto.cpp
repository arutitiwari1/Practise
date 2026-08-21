#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    for(auto it=vec.rbegin();it!=vec.rend();it++){// 5 4 3 2 1 same for forward use vec.begin() vec.end()
        cout<<*(it)<<" ";
    }
    cout<<endl;
    return 0;
}