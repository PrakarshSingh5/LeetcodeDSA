class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        vector<int>ans;
        int carry=0;
        int t=1;
        for(int i=n-1;i>=0;i--){
            if(carry==1 || t==1){
                int val=digits[i]+1;
                if(carry==1){
                    carry=0;
                }else{
                    t=0;
                }
                
                if(val>9){
                    carry=1;
                    ans.push_back(0);
                }else {
                    ans.push_back(val);
                }
            }else {
                ans.push_back(digits[i]);
            }
        }
        if(carry==1){
            ans.push_back(1);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};