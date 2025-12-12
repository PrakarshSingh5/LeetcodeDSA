class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int t=2*n;
        vector<int>ans(t);
        for(int i=0;i<t;i++){
            ans[i]=nums[i%n];
        }
        return ans;

    }
};