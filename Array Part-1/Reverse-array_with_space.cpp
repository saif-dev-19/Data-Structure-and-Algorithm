#include<bits/stdc++.h>
using namespace std;



int main(){

    int arr[]= {5,4,2,1,3};

    int n = sizeof(arr)/sizeof(int);

    int copyArr[n]; //With Extra Space

    for(int i = 0; i<n; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    for(int i = 0; i<n; i++){
        arr[i] = copyArr[i];
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }


}
