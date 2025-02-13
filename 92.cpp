class Solution {
 public:
  ListNode* reverseBetween(ListNode* head, int left, int right) {
    if (left == 1)
      return reverseN(head, right);
    head->next = reverseBetween(head->next, left - 1, right - 1);
    return head;
  }
 private:
  ListNode* reverseN(ListNode* head, int n) {
    if (n == 1)
      return head;
    ListNode* newHead = reverseN(head->next, n - 1);
    ListNode* headNext = head->next;
    head->next = headNext->next;
    headNext->next = head;
    return newHead;
  }
};


//Input
//head =
//[1,2,3,4,5]
//left =
//2
//right =
//4
//Output
//[1,4,3,2,5]
