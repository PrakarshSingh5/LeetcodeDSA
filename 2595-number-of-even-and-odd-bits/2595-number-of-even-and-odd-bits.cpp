class Solution {
public:
    vector<int> evenOddBit(int n) {
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < 32; i++) {
            if (i % 2 == 0) {
                if (((n >> i) & 1) == 1) {
                    cnt1++;
                }
            } else {
                if (((n >> i) & 1)== 1) {
                    cnt2++;
                }
            }
        }
        return {cnt1, cnt2};
    }
};