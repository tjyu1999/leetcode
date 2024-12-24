/* swap nodes in pairs
 *
 * input : head = [1, 2, 3, 4]
 * output: [2, 1, 4, 3]
 */
 
class Solution {
public:
    ListNode *swapPairs(ListNode *head) {
        // the length is necessary to make sure when to terminate
        int len = 0;
        for (ListNode *curr = head; curr; curr = curr->next)
            ++len;

        // it includes three nodes in a step of swapping, add dummy node for help
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
