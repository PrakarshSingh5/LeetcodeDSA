class Solution {
      int compare(int a, int b) {
        if (a > b) return 1;
        else if (a < b) return -1;
        else return 0;
    }
public:
    int maxTurbulenceSize(vector<int>& arr) {
           int n = arr.size();
        if (n == 1) return 1;

        int max_len = 1;
        int start = 0;

        for (int i = 1; i < n; ++i) {
            int cmp = compare(arr[i-1], arr[i]);
            if (cmp == 0) {
                start = i; // equal, reset window
            } else if (i == n - 1 || cmp * compare(arr[i], arr[i+1]) != -1) {
                // end of turbulent pattern
                max_len = max(max_len, i - start + 1);
                start = i;
            }
        }

        return max_len;
            
              

    }
};