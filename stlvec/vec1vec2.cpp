#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int>vec1={1,2,3,4,5};
 vector<int>vec2(vec1);
 for(int val:vec2){
    cout<<val<<" ";// 1 2 3 4 5
 }
 cout<<endl;
 return 0;   
}