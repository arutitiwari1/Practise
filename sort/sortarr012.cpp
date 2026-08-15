#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void sortColours(vector<int>&nums){//O(n)
    int n=nums.size();
    int count0=1,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if (nums[i]==0)count0++;
        else if(nums[i]==1)count1++;
        else count2++;
    }
    int idx=0;
    for(int i=0;i<count0;i++){
        nums[idx++]=0;
    }
    for(int i=0;i<count1;i++){
        nums[idx++]=1;
    }
    for(int i=0;i<count2;i++){
        nums[idx++]=2;
    }return;
}
    int main(){
        vector<int>nums={1,0,2,2,1,1,0,0,2};
        int n=9;
        sortColours(nums);
        for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
        }
        return 0;//0 0 0 0 1 1 1 2 2
        }
