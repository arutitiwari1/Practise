#include<iostream>//linear search index print in vector
#include<vector>
using namespace std;
int linearSearch(vector<int>&vec,int target){
    for(int i=0;i<vec.size();i++)
    {
        if (vec[i]==target)//i==toh rreturn 30
        {
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>vec={10,20,30,40,50};
    int target=30;
    int index=linearSearch(vec,target);
    if (index!=-1)
    {cout<<"found at index:"<<index<<endl;//2
        }    else{
    cout<<"not found"<<endl;
    }
    return 0;
}