class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int vl=0;
        int h=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(v.empty()){
                v.push_back(nums[i]);
            }else if(v.back() != nums[i]){
                    v.push_back(nums[i]);
            }
        }




        for(int i=1;i<v.size()-1;i++){
            if(v[i-1]<v[i]&&v[i]>v[i+1]){
                    vl++;    
            }else if(v[i-1]>v[i]&&v[i]<v[i+1]){
                 h++;
            }
        }
        return vl+h;
    }
};