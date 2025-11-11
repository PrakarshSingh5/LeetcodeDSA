class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min_product = nums[0];
        int max_product = nums[0];
        int ans = nums[0];

        int n = nums.size();

        for (int i = 1; i < n; i++) {
            int temp_max = max_product;
            max_product = std::max({nums[i], nums[i] * max_product, nums[i] * min_product});
            min_product = std::min({nums[i], nums[i] * temp_max, nums[i] * min_product});
            ans = std::max(ans, max_product);
        }

        return ans;
    }
};
