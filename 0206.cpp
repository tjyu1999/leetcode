/* reverse linked list
 *
 * input : head = [1, 2, 3, 4, 5]
 * output: [5, 4, 3, 2, 1]
 */

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = nullptr;
        
        // split into two linked lists and connect the old one to the new one
        while (head != nullptr) {
            ListNode *next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        
        return prev;
    }
};
