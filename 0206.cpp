/* linked list */

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
