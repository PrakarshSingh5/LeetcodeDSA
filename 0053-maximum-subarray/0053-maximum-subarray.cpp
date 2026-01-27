class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxiSum = 0;
        int temp = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxiSum += nums[i];
            temp = max(maxiSum, temp);
            if (maxiSum < 0) {
                maxiSum = 0;
            }
        }
        return temp;
    }
};