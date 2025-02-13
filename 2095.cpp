class Solution {
public:
    int size(ListNode* head) {
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }

    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return NULL;
        }

        int n = size(head);
        int middle = n / 2;

        ListNode* temp = head;
        for (int i = 0; i < middle - 1; i++) {
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};


//Input
head =
[1,3,4,7,1,2,6]
Output
[1,3,4,1,2,6]
Expected
[1,3,4,1,2,6]
