#include<iostream>
#include<set>
using namespace std;
void printIntersection(int arr1[],int n1,int arr2[],int n2){
    set<int>set1(arr1,arr1+n1);
    set<int>set2(arr2,arr2+n2);
    for(int val:set1){
        if(set2.find(val)!=set2.end()){
            cout<< val<<" ";     
        }
    }
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={3,4,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1,n1,arr2,n2);  // 3 4 5
    return 0;
}