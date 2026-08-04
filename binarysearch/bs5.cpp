#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr ,int n, int maxAllowedPages){
    int students=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowedPages){
         return false;       
        }
        if(pages+arr[i])
    }
}