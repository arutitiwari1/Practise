#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>&A){
    int n=A.size();
    if (n==1) return A[0];
    if (A[0]!=A[1]) return A[0];
    if (A[n-1] != A[n-2]) return A[n-1];
    int st=1,end=n-2;
    while(st<=end){
        int mid= st+(end-st)/2;
        if(A[mid]!=A[mid-1]&& A[mid]!=A[mid+1]){
            return A[mid];
        }
        if (mid%2==0){
            if(A[mid]==A[mid+1]){
                st=mid+1;

            }else{
                end =mid-1;
            }
        }else{
            if(A[mid]==A[mid-1]){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }return -1;
}
int main(){
    vector<int>A={1,1,2,3,3,4,4,8,8};
    cout<<"unique element:"<<singleNonDuplicate(A)<<endl;//2 is the index of unique element
    return 0;
}