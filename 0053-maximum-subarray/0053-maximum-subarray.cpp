class Solution {
public:
    int maxSubArray(vector<int>& nums) {    
        int sum=0;
        int maxi_sum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi_sum=max(maxi_sum, sum);
            if(sum<0){
                sum=0;
            }
        }
        return maxi_sum;
    }
};