#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int &b = a; // b is a reference variable that refers to a

    b = 20; // changing the value of b will also change the value of a


    cout << &b << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of a is: " << a << endl;

}