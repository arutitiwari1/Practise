#include<iostream>// list
#include<vector>
#include<list>
using namespace std;
int main(){
    list<int>l={1,2,3,4,5};
    for(int val:l){
        cout<<val<<" ";// 1 2 3 4 5
    }
cout<<endl;
return 0;
}