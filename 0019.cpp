/* remove Nth node from end of list
 *
 * input : head = [1, 2, 3, 4, 5], n = 2
 * output: [1, 2, 3, 5]
 * hint  : fast-slow pointer
 */

class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (n-- > 0)
            fast = fast->next;
            
            if (fast == nullptr)
                return head->next;

        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        slow->next = slow->next->next;
        return head;
    }
};
