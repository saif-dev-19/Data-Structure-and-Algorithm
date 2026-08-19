#include<bits/stdc++.h>
using namespace std;

//Brute Force  TC-> O(n^3)


void MaxSubarray(int arr[], int n){
    int latestMax = INT_MIN;

    for( int start = 0; start<n; start++){
        int sum = 0;
        for(int end = start; end<n; end++){
            sum += arr[end];
            if (sum > latestMax)
                latestMax = sum;
        }
    }

    cout <<"Max subarray sum: " <<latestMax;
}

int main(){
    int arr[] = {1,-2,3,4,-5};
    int n = 5;

    MaxSubarray(arr,n);

}