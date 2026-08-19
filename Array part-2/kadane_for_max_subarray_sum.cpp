#include<bits/stdc++.h>
using namespace std;

//optimized  TC-> O(n)


void MaxSubarray(int arr[], int n){
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i =0; i<n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    

    cout <<"Max subarray sum: " <<maxSum;
}

int main(){
    int arr[] = {1,-2,3,4,-5};
    int n = 5;

    MaxSubarray(arr,n);

}