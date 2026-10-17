/*
Problem: 83. Remove Duplicates from Sorted List
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
Difficulty: Easy
*/


#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode* result = head;
        ListNode* temp = head;

        while (head != NULL) {
            while (temp != NULL && temp->next != NULL) {
                if (head->val == temp->next->val) {
                    temp->next = temp->next->next;
                }
                else {
                    temp = temp->next;
                }
            }

            head = head->next;
            temp = head;
        }

        return result;
    }
};