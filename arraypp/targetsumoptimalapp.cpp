#include<iostream>//target sum by two pointers
#include<algorithm>
using namespace std;
int main(){
    int n,target;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter element of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"enter target sum:";
    cin>>target;
    int i=0;
    int j=n-1;
    while(i<j){
    int sum=arr[i]+arr[j];
    if(sum==target){
        cout<<arr[i]<<","<<arr[j];
        return 0;
    }
    else if(sum<target){
        i++;
    }
    else if(sum>target){
        j--;
    
    }
}
    return 0;
}