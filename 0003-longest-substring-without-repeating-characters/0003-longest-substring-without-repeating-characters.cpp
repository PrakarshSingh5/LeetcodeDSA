class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0;
        map<char, int>mp;
        int n=s.size();
        int cnt=0;
        while(i<n){
            mp[s[i]]++;
            while(mp[s[i]]>1){
                mp[s[j]]--;
                j++;
            }
            cnt=max((i-j+1), cnt);
            i++;
        }
        return cnt;
    }
};