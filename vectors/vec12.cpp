#include<iostream>
#include<vector>//pri nt the linear search
using namespace std;
int linearSearch(vector<int>&vec,int target){
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==target)
        {
            return vec[i];
        }
    }
    return-1;
}
int main(){
    vector<int>vec={10,20,30,40,50};
    int target=30;
    cout<<linearSearch(vec,30)<<endl;//30
    return 0;
}