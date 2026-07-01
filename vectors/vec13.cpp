#include<iostream>//bruteforce appreach of linear search
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>vec={10,20,30,40,50};
    int target=30;
    auto it=find(vec.begin(),vec.end(),target);
    if(it!=vec.end())
    cout<<"found at index"<<it-vec.begin();//found at index 2
    else
    cout<<"not found"<<endl;
    return 0;

}