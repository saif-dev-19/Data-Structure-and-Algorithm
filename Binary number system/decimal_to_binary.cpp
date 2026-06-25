#include<bits/stdc++.h>
using namespace std;


void DecToBin(int dec){
    int n = dec;
    int pow = 1; // 10^0 = 1, 10^1 = 10, 10^2 = 100, 10^3 = 1000, 10^4 = 10000 .......
    int bin = 0;

    while(n>0){
        int rem = n % 2;
        bin += rem * pow;
        pow = pow * 10;  // 10^1 = 10, 10^2 = 100, 10^3 = 1000, 10^4 = 10000 .......
        n = n / 2;
    }

    cout << bin << endl;

}

int main(){
    DecToBin(10);

}