#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec(3,1);// 3 times 1 {1,1,1}
    cout<<"front:"<<vec.front();//1
    cout<<"back:"<<vec.back();//1
    return 0;
}