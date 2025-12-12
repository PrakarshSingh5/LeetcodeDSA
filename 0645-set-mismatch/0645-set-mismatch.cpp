class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       int n=nums.size();
        int duplicate=0;
        int missing=0;
        for(int i=0;i<n;i++){
            int val=abs(nums[i]);
           if(nums[val-1]<0){
            duplicate=val;
           }else {
            nums[val-1]*=-1;
           }
        }
       
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                missing=i+1;
            }
        }
        return {duplicate, missing};
    }
};