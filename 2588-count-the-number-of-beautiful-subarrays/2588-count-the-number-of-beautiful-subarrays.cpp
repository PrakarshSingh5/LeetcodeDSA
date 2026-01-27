class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long cnt=0;
        long long x=0;
        unordered_map<long long,long long>mp;
        mp[0]=1;

        for (int i = 0; i < nums.size(); i++) {
            x^=nums[i];
            
            long long target=x^0;

             if (mp.find(target) != mp.end()) {
                cnt += mp[target];
            }
            mp[x]++;
        }
        return cnt;
    }
};