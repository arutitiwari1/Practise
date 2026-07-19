#include<iostream>//brute force approach
#include<vector>
#include<climits>
using namespace std;
int maxArea(vector<int>&height){
    int maxWater=0; //ans
    for(int i=0;i<height.size();i++){
        for(int j=i+1;j<height.size();j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
               {
                int currWater=w*ht;//area
                maxWater=max(maxWater,currWater);
               }
        }
    }
    return maxWater;
}
int main(){
    vector<int>height={1,7,8,6,5,4};
    cout<<maxArea(height)<<endl;
    return 0;
}