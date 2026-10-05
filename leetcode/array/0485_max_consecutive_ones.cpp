"""
Problem: 485. Max Consecutive Ones
Link: https://leetcode.com/problems/max-consecutive-ones/
Difficulty: Easy
"""


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int curr = 0, max = 0, size = nums.size();

        for (int i {0}; i < size; i++) {
            if (nums[i] != 0) curr++;
            else {
                if (curr > max) max = curr;
                curr = 0;
            }
        }

        if (curr > max) max = curr;

        return max;
    }
};