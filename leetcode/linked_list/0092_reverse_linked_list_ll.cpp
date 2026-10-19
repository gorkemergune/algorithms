/*
Problem: 92. Reverse Linked List II
Link: https://leetcode.com/problems/reverse-linked-list-ii/
Difficulty: Medium
*/



class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        while (left < right) {
            ListNode* a = head;
            ListNode* b = head;

            int i = 1;

            while (i < left) {
                a = a->next;
                i++;
            }

            i = 1;

            while (i < right) {
                b = b->next;
                i++;
            }

            swap(a->val, b->val);

            left++;
            right--;
        }

        return head;
    }
};