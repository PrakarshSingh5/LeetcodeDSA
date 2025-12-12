class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> arr(nums.size());

        int k=0;
        for(int i=0;i<nums.size()/2;i++)
        {
            arr[k++]=nums[i];
            arr[k++]=nums[i+nums.size()/2];
        }   
        return arr;
    }
};