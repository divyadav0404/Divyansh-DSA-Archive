class Solution { //TC , SC BOTH EQUAL TO O(N) BRUTE Approach used hash map here .
public:
    ListNode *detectCycle(ListNode *head) {
                  std::unordered_set<ListNode*> visited ;
          ListNode* current = head ;
          while ( current != nullptr)
          {
            if ( visited.find(current) != visited.end())
            {
                return current ;
            }
            visited.insert(current);
            current = current-> next ;
          }
          return nullptr ;
    }

    
};
