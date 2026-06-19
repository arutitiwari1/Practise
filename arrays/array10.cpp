#include<iostream>
using namespace std;//sum and product of array
void SumandProduct(int arr[],int size,int *sum,int *product){
    *sum=0;
    *product=1;
    for (int i=0;i<size;i++){
        *sum+=arr[i];
        *product*=arr[i];
    }
}
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    int sum,product;
    SumandProduct(arr,size,&sum,&product);
    printf("sum=%d\n",sum);//10
    printf("product=%d\n",product);//24
    return 0;
}