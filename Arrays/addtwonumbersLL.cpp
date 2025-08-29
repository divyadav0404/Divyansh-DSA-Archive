class Solution { //TC - MAX (O(N,M)) and SC - O(1)
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);       // dummy head node
        ListNode* curr = &dummy; // pointer to build result
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int sum = carry;
            
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // new carry
            curr->next = new ListNode(sum % 10); // new digit
            curr = curr->next;
        }

        return dummy.next; // skip dummy node
    }
};
