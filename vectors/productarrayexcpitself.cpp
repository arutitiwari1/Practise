#include<iostream>//bruteforce approach for product of an array excpt itself 
#include<vector>
#include<climits>
using namespace std;
vector<int>productExceptitself(vector<int>&nums){
    int n=nums.size();
    vector<int>ans(n,1);
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                prod*=nums[j];
            }
            
        }
        ans[i]=prod;
    }
    return ans;
}
int main() {
    vector<int>nums={1,2,3,4};
    vector<int>ans=productExceptitself(nums);
    for(int x:ans){
        cout<<x<<" ";//24 12 8 6
        
    }
    cout<<endl;
    return 0;
}