class Solution { //O(N) TC  SC O(N) brute
public:
    bool isPalindrome(ListNode* head) {
        vector < int> values ;
        ListNode * temp = head ;
        while ( temp != nullptr)
        {
values.push_back(temp-> val);
temp = temp-> next ;
        }
        int i = 0 , j = values.size() - 1 ;
        while(i<j){
        if ( values[i]!= values[j])
        {
            return false ;
        }
        i++;
        j--;
        }
        return true ;
    }
};
