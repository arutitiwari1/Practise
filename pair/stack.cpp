#include<iostream>// stack print
#include<vector>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);// ! push_back
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;// 3 2 1
    return 0;
}