#include<bits/stdc++.h>
using namespace std;




void printArray(int *ptr, int n){
    for(int i = 0; i<n; i++){
        cout << *ptr << endl;
        ptr ++;
    }
}

int main(){
    int ptr[] = {2,4,6,8,9,10,12,14,15};
    int n = sizeof(ptr)/sizeof(int);


     printArray(ptr,n);
}