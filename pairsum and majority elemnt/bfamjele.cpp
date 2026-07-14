#include<iostream>//brute force approach of majority element 
#include<vector>
#include<climits>
using namespace std;
int majorityElement(vector<int>&nums){
    int n=nums.size();
    for(int val:nums){
        int freq=0;
        for(int ele:nums){
            if(ele==val){
                freq++;
            }
        }
        if(freq>n/2){
            return val;
        }
    }return -1;
}
int main(){
    vector<int>nums={1,2,2,2,1,1,1,1,1,1,1};
    cout<<majorityElement(nums);//1
    return 0;
}