class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0;
        int mask = 0;

        for (int bit = 31; bit >= 0; bit--) {
            mask = mask | (1 << bit);
            unordered_set<int> s;

            for (int x : nums) {
                s.insert(x & mask);
            }

            int candidate = ans | (1 << bit);

            bool possible = false;
            for (int p : s) {
                if (s.count(p ^ candidate)) {
                    possible = true;
                    break;
                }
            }

            if (possible) {
                ans = candidate;
            }
        }

        return ans;
    }
};
