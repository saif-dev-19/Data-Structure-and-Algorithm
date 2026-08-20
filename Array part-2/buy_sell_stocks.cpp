#include<bits/stdc++.h>
using namespace std;

void maxProfit(int prices[], int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;

    for(int i =1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
    }

    int maxProfit = 0;

    for(int i =0; i<n; i++){
        int currentProfit = prices[i] - bestBuy[i];
        maxProfit = max(currentProfit,maxProfit);
    }

    cout << maxProfit;
}

int main(){
    int arr[] = {7,1,5,3,9,4};
    int n = 5;

    maxProfit(arr,n);
}