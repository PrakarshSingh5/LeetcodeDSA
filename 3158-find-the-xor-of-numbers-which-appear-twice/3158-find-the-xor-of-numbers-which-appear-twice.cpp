class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> m;
        int xorr = 0;
        for (int i : nums) {
            if (m[i]) xorr ^= i;
            m[i]++;
        }
        return xorr;
    }
};