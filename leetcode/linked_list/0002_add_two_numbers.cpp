/*
Problem: 2. Add Two Numbers
Link: https://leetcode.com/problems/add-two-numbers/
Difficulty: Medium
*/


#include "iostream"
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* result = NULL;
        ListNode* last = NULL;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;

            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            ListNode* yeni = new ListNode(sum % 10);

            if (result == NULL) {
                result = yeni;
            } else {
                last->next = yeni;
            }

            last = yeni;
        }

        return result;
    }
};
