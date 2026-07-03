#include<iostream>//leat code q 169 print majority element
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
    int count=1;
    int res=nums[0];
    for(int i=1;i<nums.size();i++){
        if (count==0){
            res=nums[i];
        }
        if (res==nums[i]){
            count++;
        }else{
            count--;
        }
    }
    return res;
}
int main(){
    vector<int>nums={1,1,2,2,2,2,3,4};
    cout<< majorityElement(nums);//2
    return 0;
}