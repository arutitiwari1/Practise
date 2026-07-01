#include<iostream>
#include<vector>//reverse code of vector
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    int left=0,right=vec.size()-1;
    while(left<right){
        swap(vec[left],vec[right]);
        left++;
        right--;
    }
    for(int i:vec)
    cout<<i<<" ";//5 4 3 2 1
    return 0;
}