#include<bits/stdc++.h>
using namespace std;

// Moore's voting algorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int majority;
        for (int i = 0; i < nums.size(); i++) {
            if (count) {
                if (nums[i] == majority) {
                    count++;
                } else {
                    count--;
                }
            } else {
                majority = nums[i];
                count = 1;
            }
        }

        return majority;
    }
};