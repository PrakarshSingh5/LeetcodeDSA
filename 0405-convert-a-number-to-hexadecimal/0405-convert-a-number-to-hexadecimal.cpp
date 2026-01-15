class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        unsigned int n = num;  
        string str = "";

        while (n > 0) {
            int rem = n % 16;
            if (rem < 10) {
                str.push_back('0' + rem);
            } else {
                str.push_back('a' + (rem - 10));
            }
            n /= 16;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};
