#include<iostream>
#include<vector>
#include<queue>
#include<climits>

using namespace std;
int main(){
queue<int>q;
q.push(1);
q.push(2);
q.push(3);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();    
}
cout<<endl;// 1 2 3
return 0;
}