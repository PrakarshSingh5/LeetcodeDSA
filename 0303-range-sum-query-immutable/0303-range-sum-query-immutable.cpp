class NumArray {
public:
vector<int>prefix_sum;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        prefix_sum.resize(n+1, 0);
      
        for(int i=0;i<n;i++){
            prefix_sum[i+1]=prefix_sum[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
            int val=prefix_sum[right+1]-prefix_sum[left];
            return val;
    }
};

