/*
Problem: 83. Remove Duplicates from Sorted List II
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
Difficulty: Medium
*/


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp;
        ListNode* prev = NULL;
        ListNode* result = head;

        while (head != NULL) {
            temp = head;

            while (temp->next != NULL && head->val == temp->next->val) {
                temp = temp->next;
            }

            if (temp != head) {
                if (prev == NULL) {
                    result = temp->next;
                }
                else {
                    prev->next = temp->next;
                }
            }
            else {
                prev = head;
            }

            head = temp->next;
        }

        return result;
    }
};