"""
Problem: 3945. Digit Frequency Score
Link: https://leetcode.com/problems/digit-frequency-score/
Difficulty: Easy
"""


class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        if n == 0:
            return 0

        temp = n
        hash = {}
        while temp > 0:
            digit = temp % 10
            hash[digit] = hash.get(digit, 0) + 1
            temp //= 10

        score = 0
        for digit, freq in hash.items():
            score += digit * freq

        return score
