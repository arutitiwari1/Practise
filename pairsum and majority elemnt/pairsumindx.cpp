#include<iostream>
#include<vector>
#include<climits>
using namespace std; // pair sum index
vector<int> pairSum(vector<int>nums,int target){
    
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (nums[i]+nums[j]==target)
            {
                return{i, j};
            }
        }
    }
    return{};
}
int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>ans=pairSum(nums,target);
    if(!ans.empty()){
        cout<<ans[0]<<","<<ans[1]<<endl;//0,1
    }
    else{
        cout<<"not found";
    }
    return 0;
}