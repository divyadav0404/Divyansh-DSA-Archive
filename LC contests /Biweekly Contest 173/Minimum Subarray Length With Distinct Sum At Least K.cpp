class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        long long s = 0 ;
        int i = 0 ;
        int ans = nums.size() + 1 ;

        for ( int j = 0 ; j < nums.size() ; j ++)
            {
                mp[nums[j]] ++ ;
                if ( mp[nums[j]]== 1)
                {
                    s+= nums[j];
                }
                while ( s >= k)
                    {
                        int ln = j-i+ 1 ;
                        if ( ln < ans )
                        {
                            ans = ln ;
                        }
                        mp[nums[i]]--;
                        if ( mp[nums[i]]==0)
                        {
                            s -= nums[i];
                        }
                        i++;
                    }
            }
        if ( ans == nums.size() + 1)
        {
        return -1 ;
    }
        return ans ;
    }
};
