class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n==0) return 0;
        vector<int> leftmax(n) , rightmax(n);
        int water = 0 ;
        leftmax[0] = height[0];
        for ( int i = 1 ; i < n ; i ++)
        {
            leftmax[i] = max(leftmax[i-1], height[i]);
        }
        rightmax[n-1] = height[n-1];
        for ( int i = n-2 ; i >= 0 ; i--)
        {
            rightmax[i] = max(rightmax[i+1], height[i]);
        }
        for ( int i = 0 ; i < n ; i ++)
        {
            int waterlevel = min ( leftmax[i], rightmax[i]) - height[i];
            water+= waterlevel ;
        }
        return water ;
    }
}; //O(n) time complexity almost and o(n) space complexity , we can also compute by using sufix and prefix so that space complexity gets reduced to O(1) , i,e constant space.

//space opticlass Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        int water = 0;

        // Move two pointers toward each other
        while (left < right) {
            if (height[left] <= height[right]) {
                // Process left side
                if (height[left] >= leftMax)
                    leftMax = height[left];  // update boundary
                else
                    water += leftMax - height[left]; // trap water
                left++;
            } 
            else {
                // Process right side
                if (height[right] >= rightMax)
                    rightMax = height[right]; // update boundary
                else
                    water += rightMax - height[right]; // trap water
                right--;
            }
        }

        return water;
    }
};
mised code 
