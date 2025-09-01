class Solution { //brute force approach as TC is equal to O(n*m) but very easy solution to understand 
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        for ( ListNode *a= headA ; a!=nullptr ; a=a->next )
        {
            for ( ListNode *b = headB ; b!=nullptr ; b =b-> next)
            {
                if ( a==b)
                {
                    return a ;
                }
            }
        }
        return nullptr;
    }
};
