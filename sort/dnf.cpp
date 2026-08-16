#include<iostream>//DNF algorithm
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
void sortColours(vector<int>&nums){
    int n=nums.size();
    int low=0,high=n-1,mid=0;
    while(mid<=high){
        if(nums[mid]==0){//0
        swap(nums[low],nums[mid]);
        mid++;low++;
        }else if(nums[mid]==1){//1
            mid++;
        }
        else{//2
            swap(nums[high],nums[mid]);
            high--;
        }
    }
}int main(){
    vector<int>nums={0,0,0,1,1,0,2,2,2,2};
    int n=10;
    sortColours(nums);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";// 0 0 0 0 1 1 2 2 2 2
    }cout<<endl;
    return 0;
}