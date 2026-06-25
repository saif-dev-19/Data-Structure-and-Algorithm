#include<bits/stdc++.h>
using namespace std;



void binaryToDecimal(int bin){
    int decimal = 0;
    int pow = 1;  // 2^0 = 1, 2^1 = 2, 2^2 = 4, 2^3 = 8, 2^4 = 16 .......

    while(bin > 0){
        int number = bin % 10;
        decimal += number * pow;
        pow = pow * 2;
        bin = bin / 10;

    }
    cout << decimal << endl;
}

int main(){
    binaryToDecimal(1010);
}