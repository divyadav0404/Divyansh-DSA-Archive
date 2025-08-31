class Solution {
public: //TC O(NLOGN)
//SC O(N)
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }

private:
    int mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end) return 0;

        int mid = start + (end - start) / 2;
        int count = 0;

        count += mergeSort(nums, start, mid);
        count += mergeSort(nums, mid + 1, end);
        count += countReversePairs(nums, start, mid, end);

        merge(nums, start, mid, end);
        return count;
    }

    int countReversePairs(vector<int>& nums, int start, int mid, int end) {
        int count = 0;
        int j = mid + 1;

        for (int i = start; i <= mid; i++) {
            while (j <= end && (long)nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += (j - (mid + 1));
        }

        return count;
    }

    void merge(vector<int>& nums, int start, int mid, int end) {
        vector<int> temp;
        int left = start, right = mid + 1;

        while (left <= mid && right <= end) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= end) temp.push_back(nums[right++]);

        for (int i = 0; i < temp.size(); ++i) {
            nums[start + i] = temp[i];
        }
    }
};
