#include<iostream>// tc=O(n) sc=O(1) lc=238
#include<vector>// ooptimal app product of array excpt itself
#include<climits>
using namespace std;
vector<int>productExceptitself(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,1);
    //vector<int>prefix(n,1);no nneed
   // vector<int>suffix(n,1);no need sc reduce
    //prefix
    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    //suffix
    for(int i=n-2;i>=0;i--){
        suffix =suffix* (nums[i+1]);
        ans[i]=ans[i]*suffix;

    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    vector<int>ans=productExceptitself(nums);
    for(int x:ans){
        cout<<x<<" ";// 24 12 8 6
    }
    cout<<endl;
    return 0;
}