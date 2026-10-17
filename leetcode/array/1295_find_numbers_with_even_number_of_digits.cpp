"""
Problem: 1295. Find Numbers with Even Number of Digits
Link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
Difficulty: Easy
"""



class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int digit = 0, even = 0;
        
        for (int num : nums) {
            while (num > 0) {
                digit++;
                num = num / 10;
            }

            if (digit % 2 == 0) even++;
            
            digit = 0;
        }

        return even;
    }
};