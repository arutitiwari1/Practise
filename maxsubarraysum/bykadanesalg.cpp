#include<iostream>//by kadanes ald max sum>0 rkho
#include<climits>
#include<vector>
using namespace std;
int maxSubArray(vector<int>&nums){
    int currSum=0,maxSum=INT_MIN;
    for(int val:nums){
        currSum+=val;
        maxSum=max(currSum,maxSum);
        if (currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main(){
    vector<int>nums={1,-3,2,4,-5,3,4,5};

    cout<<maxSubArray(nums)<<endl;//13
    return 0;
}