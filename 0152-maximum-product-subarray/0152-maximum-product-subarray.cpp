class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi_prod=1;
        int mini_prod = 1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
             int new_maxi_prod = max({maxi_prod*nums[i], nums[i], mini_prod*nums[i]});
             int new_mini_prod = min({maxi_prod*nums[i], nums[i], mini_prod*nums[i]});
             maxi_prod=new_maxi_prod;
             mini_prod=new_mini_prod;

            ans=max(maxi_prod, ans);
        }
        return ans;
    }
};

// 2, 3, -2, 4
// maxi_prod = 2, 6,