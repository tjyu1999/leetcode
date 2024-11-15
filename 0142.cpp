/* linked list cycle II
 * 
 * input : head = [3, 2, 0, -4], pos = 1
 * output: tail connects to node index 1
 * hint  : fast-slow pointer
 */

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
            
            if (fast != slow) {
                slow = head;
                
                while (fast != slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                
                return slow;
            }
        }
        
        return nullptr;
    }
};
