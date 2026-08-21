#include<iostream>//list 
#include<vector>
#include<list>
using namespace std;
    int main(){
        list<int>l;
        l.push_back(1);
        l.push_back(2);
        l.push_front(3);// 3 1 2
        l.pop_back();
        l.pop_front();
        for(int val:l){
            cout<<val<<" ";// 1
        }
        cout<<endl;
        return 0;
    }