#include<bits/stdc++.h>
using namespace std;

//Not extra variable
void swap(int arr[],int start,int end){
    arr[start] = arr[start] + arr[end];
    arr[end] = arr[start] - arr[end];
    arr[start] = arr[start] - arr[end];
}

//With extra temp variable
// void swap(int arr[],int start,int end){
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
// }

int main(){

    int arr[]= {5,4,2,1,3};

    int n = sizeof(arr)/sizeof(int);

    int start = 0; int end = n-1;

    while(start < end){
        swap(arr,start,end);
        start++;
        end--;
    }

    for(int i =0; i<n; i++){
        cout << arr[i] << " ";
    }

    // another one
    // for(int i = n-1; i>=0; i--){
    //     cout << arr[i] << " ";
    // }

}
