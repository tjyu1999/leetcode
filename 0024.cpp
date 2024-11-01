class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        int len = 0;
        
        for (ListNode *curr = head; curr; curr = curr->next)
            ++len;
        
        ListNode dummy(0, head);
        ListNode *prev = &dummy;
        ListNode *curr = head;

        for (int i = 0; i < len / 2; ++i) {
            ListNode *next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
            prev = curr;
            curr = curr->next;
        }

        return dummy.next;
    }
};
