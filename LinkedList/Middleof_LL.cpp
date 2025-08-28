class Solution {
public: //adv , only one pass i,e no need to count nodes first tc-O(n) SC-O(1)
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head ;
        ListNode* fast = head ;

        while ( fast && fast->next)
        {
            slow = slow->next ;
            fast = fast->next->next ;
        }
        return slow ;
    }
};
