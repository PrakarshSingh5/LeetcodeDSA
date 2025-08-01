class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxi=max(maxi, sum);
            if(sum< 0){
                sum=0;
            }
        }

        int t_sum=0;
        for(auto it: nums){
            t_sum+=it;
        }

        int mini_so_far=nums[0];
        int mini_end_here=nums[0];
        

        for(int i=1;i<n;i++){
            mini_so_far=min(nums[i], mini_so_far+nums[i]);
            mini_end_here=min(mini_so_far, mini_end_here);
        }
        cout<<mini_end_here<<" ";
        cout<<maxi<<" ";
        cout<<t_sum;
        if(t_sum == mini_end_here){
            return maxi;
        }

        return max(t_sum-mini_end_here, maxi);

    }
};