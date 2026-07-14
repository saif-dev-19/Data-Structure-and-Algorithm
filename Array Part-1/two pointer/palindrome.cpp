#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "A man, a plan, a canal: Panama";
    string n = "";
    for( char c : s){
        if(isalnum(c)){
            n += tolower(c);
        }
    }

    int m = n.length();

    // cout << n[0]<< " " << n[m-1];

    char start = 0;
    char end = m-1;

    bool is_palindrome = true;

    while(start <= end){
        if(n[start] != n[end]){
            is_palindrome = false;
            break;
        }
        start++;
        end--;
    }

    cout << is_palindrome;




}