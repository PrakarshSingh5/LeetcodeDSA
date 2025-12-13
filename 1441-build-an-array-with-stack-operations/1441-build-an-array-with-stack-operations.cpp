class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
            vector<int>freq(101,0);
            vector<string>res;
            int val=*max_element(target.begin(),target.end());
            for(int x:target){
                freq[x]++;
            }

            for(int i=1;i<=val;i++){
                res.push_back("Push");
                if(freq[i]==0){
                    res.push_back("Pop");
                }
            }
            return res;
    }
};