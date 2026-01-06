class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<32;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                int val=(nums[j]>>i)&1;
                if(val==1){
                    cnt++;
                }
            }
            if(cnt>=k){
                ans+=pow(2,i);
            }
        }
        return ans;
    }
};