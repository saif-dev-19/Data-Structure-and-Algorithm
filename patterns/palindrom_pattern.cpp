#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            cout << " ";
        }
        for(int k = i; k>=1; k--){
            if(i == 1)
                cout << 1;
            else
                cout << k << ""; 
        }
        for(int j = 1; j<=i-1; j++){
            if(i == 1 ){
                cout << "";
            }
            else
                cout << j+1;
        }
        cout << endl;
}

}