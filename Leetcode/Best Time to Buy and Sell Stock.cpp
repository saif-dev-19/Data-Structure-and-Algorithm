
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy[100000];
        int maxProfit = 0;
        bestBuy[0] = INT_MAX;

        for(int i =1; i<prices.size(); i++){
            bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
        }

        for(int i =0; i<prices.size(); i++){
            int currentProfit = prices[i] - bestBuy[i];
            maxProfit = max(currentProfit,maxProfit);
        }

        return maxProfit;

    }
};