class Solution {
public:
    bool solve(string s1, string s2, string s3, int i, int j, int k, vector<vector<int>>&dp) {
        if (i >= s1.size()) {
            return s2.substr(j) == s3.substr(k);
        }
        if (j >= s2.size()) {
            return s1.substr(i) == s3.substr(k);
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        bool a=false, b=false;
        if(s1[i]==s3[k]){
            a=solve(s1,s2,s3,i+1, j,k+1,dp);
        }
        if(s2[j]==s3[k]){
            b=solve(s1,s2,s3,i, j+1,k+1, dp);
        }
        return dp[i][j]= a || b;
    }
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>>dp(s1.size(), vector<int>(s2.size()+1, -1));
        return solve(s1, s2, s3, 0, 0, 0, dp);
    }
};