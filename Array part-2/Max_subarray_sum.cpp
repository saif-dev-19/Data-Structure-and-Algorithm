#include<bits/stdc++.h>
using namespace std;

//Brute Force


void MaxSubarray(int arr[], int n){
    int latestMax = INT_MIN;
    for(int start = 0; start<n; start++){

        for(int end = start; end<n; end++){
            int max = 0;

            for(int i = start; i<=end; i++){
                max += arr[i];
            }

            if(max > latestMax)
                latestMax = max;
        }
    }

    cout << "Max SubArray = "<<latestMax << endl;
}

int main(){
    int arr[] = {1,-2,3,4,-5};
    int n = 5;

    MaxSubarray(arr,n);

}