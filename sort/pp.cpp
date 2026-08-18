#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;//next permutation lc=33
void nextPermutation(vector<int>&A){
    //find the pivot
    int pivot=-1,n=A.size();
    for(int i=n-2;i>=0;i--){
        pivot=i;
        break;
    }
    if (pivot==-1){
        reverse(A.begin(),A.end());
        return;
    }
    //2nd step= next larger element 
    for(int i=n-1;i>=0;i--){
        if(A[i]>A[pivot]){
            swap(A[i],A[pivot]);
            break;
        }
    }
    //3rd step=reverse (piv+1 to n-1)
    //reverse (A.begin()+pivot+1,A.end())
    int i=pivot+1,j=n-1;
    while(i<=j){
        swap(A[i++],A[j--]);
    }
}
int main(){
    vector<int>A={1,2,3,6,5,4};
    int n=6;
    nextPermutation(A);
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";// 1 2 3 5 6 4
    }cout <<endl;
    return 0;
}