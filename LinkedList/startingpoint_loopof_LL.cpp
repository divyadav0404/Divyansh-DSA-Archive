class Solution { //TC , SC BOTH EQUAL TO O(N) BRUTE Approach used hash map here .
public:
    ListNode *detectCycle(ListNode *head) {
                  std::unordered_set<ListNode*> visited ;
          ListNode* curr = head ;
          while ( curr != nullptr)
          {
            if ( visited.find(curr) != visited.end())
            {
                return curr ;
            }
            visited.insert(curr);
            curr = curr-> next ;
          }
          return nullptr ;
    }

    
};
