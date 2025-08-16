class Solution {
public:
    int characterReplacement(string s, int k) {

        int i=0;
        int j=0;
        int max_freq=0;
        int n=s.size();
        int max_len=0;


        vector<int>charCount(26, 0);

        for(int j=0;j<n;j++){

            charCount[s[j]-'A']++;

            max_freq=max(max_freq, charCount[s[j]-'A']);
            
            if((j-i+1)-max_freq>k){
                    charCount[s[i]-'A']--;
                    i++;
            }
            max_len=max((j-i+1), max_len);
        }   

        return max_len;
    }

};