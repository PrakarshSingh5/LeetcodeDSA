class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int t = 2 * n;
        vector<int> ans(t);
        int i = 0, j = n;
        int k=0;
        while (k < t) {
            ans[k] = nums[i];
            ans[k + 1] = nums[j];
            k+=2;
            i+=1;
            j+=1;
        }

        return ans;
    }
};