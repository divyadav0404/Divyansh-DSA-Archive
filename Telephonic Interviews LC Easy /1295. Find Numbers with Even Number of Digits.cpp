class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();

        int result = 0;

        for(int i = 0; i < n; i++) {
            if((nums[i] >= 10 && nums[i] <= 99) || 
               (nums[i] >= 1000 && nums[i] <= 9999) ||
               (nums[i] == 100000)) {
                result++;
               }
        }

        return result;

    }
};
//second sol

class Solution {
public:
    int findNumbers(vector<int>& nums) {
     int ans = 0 ;

        for (int x : nums) {
            int cnt = 0;

            while (x > 0) {
                cnt++;
                x /= 10;
            }

            if (cnt % 2 == 0)
                ans++;
        }

        return ans;
    }
};
