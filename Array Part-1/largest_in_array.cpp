#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
}