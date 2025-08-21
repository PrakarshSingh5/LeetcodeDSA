class Solution {
public:

// (1, 7, 3 6, 5, 6)
// ( 1, 8, 11, 17, 22, 28)
// 17-6=11
// 28-17

    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n, 0);
        res[0]=nums[0];
        for(int i=1;i<n;i++){
            res[i]=(res[i-1]+nums[i]);
        }
        for(int i=0;i<n;i++){
            if((res[i]-nums[i])==(res[n-1]-res[i])){
                return i;
            }
        }
        return -1;
    }
};