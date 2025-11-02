class Solution {
public:
    int majorityElement(vector<int>& nums) {

            int count1=0, cand1=0;
            for(int i=0;i<nums.size();i++){
                if(cand1==nums[i]){
                    count1++;
                }else if(count1==0){
                    cand1=nums[i];
                    count1++;
                }else {
                    count1--;
                }
            }
            return cand1;
    }
};