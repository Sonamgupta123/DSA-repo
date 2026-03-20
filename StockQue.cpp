#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices){
    int maxProfit = 0 , bestBuy = prices[0];
    for(int i=1 ; i<prices.size() ; i++){
    if(prices[i]>bestBuy){
        maxProfit = max(maxProfit, prices[i]-bestBuy);
    }
    bestBuy= min(bestBuy, prices[i]);
}
return maxProfit;
}
int main(){
    vector<int> prices = {3,4,5,6,7};
    cout<<"maximum profit after buying ans selling stock is "<<maxProfit(prices)<<endl;
    return 0;
}