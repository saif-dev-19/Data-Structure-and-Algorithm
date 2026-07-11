#include<bits/stdc++.h>
using namespace std;

int main(){
   int a = 10;
   int *ptr = &a; // pointer variable that stores the address of a

   cout << "The address of ptr and a is: " << ptr << " = " << &a << endl;
   cout << "The value of a is: " << a << endl;
   cout << "The value of *ptr is: " << *ptr << endl;
}