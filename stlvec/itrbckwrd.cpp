#include<iostream>//iterator backward
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    vector<int>::reverse_iterator it;
    for(it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";// 5 4 3 2 1
    } 
    cout<<endl;
    return 0;
}