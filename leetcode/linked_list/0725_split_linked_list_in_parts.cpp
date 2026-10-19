class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;

        // Önce node sayısını bul
        while (temp != NULL) {
            n++;
            temp = temp->next;
        }

        int size = n / k;
        int extra = n % k;

        vector<ListNode*> result(k, NULL);

        int i = 0;

        while (i < k) {
            result[i] = head;

            int partSize = size;

            if (i < extra) {
                partSize++;
            }

            int j = 1;

            while (j < partSize && head != NULL) {
                head = head->next;
                j++;
            }

            if (head != NULL) {
                ListNode* next = head->next;
                head->next = NULL;
                head = next;
            }

            i++;
        }

        return result;
    }
};