#include<bits/stdc++.h>
using namespace std;

int main(){
    bool val = true;
    int n = 5;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << val << " ";
            if (j != i)
            {
                val = !val;

            }
        }
        if(i %2 != 0 && val != true)
        {
            val = !val;
        }
        else if(i % 2 == 0 && val != false)
        {
            val = !val;
        }
    cout<<"\n";
}
}
