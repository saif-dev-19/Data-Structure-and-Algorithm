#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {7,2,4,3,1};
    int target = 9;
    int len = sizeof(nums)/sizeof(int);
        vector<int> v;

        for(int i = 0; i<len-1; i++){
            for(int j = 1; j<len; j++){
                if(nums[i]+nums[j] == target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }

        for(int i : v){
            cout << v[i] << " ";
        }
        
}



