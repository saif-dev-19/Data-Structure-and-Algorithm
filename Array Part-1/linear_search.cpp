#include<bits/stdc++.h>
using namespace std;



void linear_search(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        if (arr[i] == key){
            cout << "Element found at index: " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}


int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;



    int arr[n];

    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    linear_search(arr, size, key);

}