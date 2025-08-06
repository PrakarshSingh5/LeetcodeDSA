class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0, j=0;
        int cnt=INT_MAX;
        int sum=0;
        while(i<n){
            sum+=nums[i];
            while(sum>=target){
                //   if(sum==target){
                cnt=min(cnt, (i-j+1));
            // }
              sum-=nums[j++];
            }
          
            i++;
        }
        if(cnt==INT_MAX)cnt=0;
        return cnt;
    }
};