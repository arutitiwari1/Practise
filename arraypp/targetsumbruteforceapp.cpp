#include<iostream>//find taregt sum without two pointers
#include<algorithm>
using namespace std;
int main(){
    int n,target;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cout<<"enter element of arr:";
    cin>>arr[i];
    }
    cout<<"enter target sum:";
    cin>>target;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum=arr[i]+arr[j];
            if (sum==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }
    }return 0;
}