"""
Problem: 1089. Duplicate Zeros
Link: https://leetcode.com/problems/duplicate-zeros/
Difficulty: Easy
"""


#include <iostream>
#include <vector>


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0 ) {
                for (int j = arr.size() - 1; j > i; j--) arr[j] = arr[j - 1];
                i++;
            }
        }
    }
};