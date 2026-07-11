#include<bits/stdc++.h>
using namespace std;


void changeA(int *ptr){
    *ptr = 20;
    cout << *ptr << endl;
}

//  void changeA(int ptr){
//     ptr = 20;
//     cout << ptr << endl;
// }

int main(){
    int a = 10;
    // changeA(a);
    changeA(&a);

    cout << a << endl;

}