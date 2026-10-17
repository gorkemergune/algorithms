"""
Problem: 977. Squares of a Sorted Array
Link: https://leetcode.com/problems/squares-of-a-sorted-array/
Difficulty: Easy
"""


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int size = nums.size();
        
        for (int i = 0; i < size; i++) {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};