#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(4);
    q.push(10);
    q.push(5);
    q.push(3);
    while(!q.empty()){
        cout<<q.top()<<" ";// 3 4 5 10
        q.pop();
    }cout<<endl;
    return 0;
}
