#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {2,4,6,8,9,10,12,14,15};

    int *ptr1 = arr; //2
    int *ptr2 = ptr1 + 3; //8

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;


    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << ptr2 - ptr1 << endl;



    
}