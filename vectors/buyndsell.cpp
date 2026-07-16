#include<iostream>//buy and sell tc=n(O)
#include<climits>
#include<vector>
using namespace std;
int maxProfit(vector<int>&prices){
    int maxProfit=0,bestBuy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProfit=max(maxProfit,prices[i]-bestBuy);

        }
        bestBuy=min(bestBuy,prices[i]);
    }
    return maxProfit;
}
int main(){
    vector<int>prices={4,2,7,8,5};//6
    cout<<maxProfit(prices)<<endl;
    return 0;
}