/* merged two sorted list
 * 
 * input: list1 = [1,2,4], list2 = [1,3,4]
 * output: [1,1,2,3,4,4]
 * hint: recursion
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (list1 == nullptr || list2 == nullptr)
            return list1 ? list1 : list2;
        
        if (list1->val > list2->val)
            swap(list1, list2);
        list1->next = mergeTwoLists(list1->next, list2);
        
        return list1;
    }
};
