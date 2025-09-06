/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution { //TC  almost O(n) SC - O(1) as no extra space is used
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if ( !head || !head-> next || k ==0) return head ;
    
    ListNode*curr = head ; //finding length of linked list and also keeping a count ++
    int n = 1 ;
    while ( curr-> next)
    {
        curr = curr-> next ;
        n++ ;
    }
    curr-> next = head ;
    //Now we will find out the new head 
    k = k % n ;
    int stepsnh = n-k ; //naye head tak phuchne ke liye steps 
    ListNode * newtail = curr;
    while (stepsnh--)
    {
        newtail = newtail-> next ;
    }
    ListNode * newhead = newtail-> next ;
    newtail-> next = nullptr ; //basically we are breaking the circular ll
    return newhead ;
    }
};
