/*
Problem: 541. Reverse String II
Link: https://leetcode.com/problems/reverse-string-ii/
Difficulty: Easy
*/

#include "string"
#include "vector"
#include "iostream"
#include "algorithm"


class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        int m = s.size();

        while (i < m) {
            int left = i;
            int right = i + k - 1;

            if (right >= m) {
                right = m - 1;
            }

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }

            i = i + 2 * k;
        }

        return s;
    }
};