#include<iostream>// deque
#include<vector>
#include<deque>
using namespace std;
int main(){
    deque<int>d={1,2,3,4,5};
    for(int val:d){
        cout<<val<<" ";// 1 2 3 4 5
    }
    cout<<endl;
    return 0;
}