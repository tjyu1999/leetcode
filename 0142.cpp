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
        
        /* a = distance between head and the start of cycle
         * b = distance from the start of cycle and the first meeting of two pointers
         * c = distance traveled by fast pointer
         *
         * since faster pointer is twice as fast as slow pointer, which means 2(a + b) = a + b + c + b
         * thus a = c
         */
        
        return nullptr;
    }
};
