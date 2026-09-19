#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    priority_queue<int>q;
    q.push(3);
    q.push(5);
    q.push(10);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<endl;// 10 5 4 3
    q.pop();
    }
    return 0;
}