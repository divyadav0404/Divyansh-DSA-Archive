class Solution { //TC - O(M+n) SC - O(M+N)
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy ;
        ListNode* tail = &dummy;

        while ( list1 && list2)
        {
            if ( list1-> val < list2-> val)
            {
                tail-> next = list1 ;
                list1 = list1-> next ;
            }
            else
            {
                tail->next = list2;
                list2= list2-> next ;
            } // agar fhr bhi bach jati hai list to unko assemble krne ka way
           tail = tail->next ;
        }
           if(list1) tail-> next = list1;
            else tail->next = list2;
            return dummy.next ;
    }
};
