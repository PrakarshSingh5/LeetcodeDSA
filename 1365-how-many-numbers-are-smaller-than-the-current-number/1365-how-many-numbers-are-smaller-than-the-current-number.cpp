class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int>freq(101,0);
            for(int i=0;i<nums.size();i++){
                freq[nums[i]]++;
            }
            for(int i=1;i<=100;i++){
                freq[i]=freq[i]+freq[i-1];
            }
            int i=0;
            vector<int>ans(nums.size());
            for(auto x:nums){
               if (x == 0) ans[i++] = 0;    // FIX 👈
            else ans[i++] = freq[x - 1];
            }
            
            return ans; 
    }
};