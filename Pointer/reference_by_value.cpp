#include<bits/stdc++.h>
using namespace std;


// Reference by variable


void changeA(int &a){
    cout << "The address of a is: " << &a << endl;
    a = 20;
    cout << "The value of a is: " << a << endl;
}

int main(){
    int a = 10;
    // int &b = a; // b is a reference variable that refers to a

    // b = 20; // changing the value of b will also change the value of a


    // cout << &b << endl;
    // cout << "The value of b is: " << b << endl;
    // cout << "The value of a is: " << a << endl;

    
    cout << "The address of a is: " << &a << endl;
    changeA(a);
    cout << "The value of a is: " << a << endl;

}