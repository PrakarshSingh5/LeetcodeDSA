class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size() / 3;
        cout << n;
        // n / 3->6 / 3 = (i, i, i, x, y, z);
        int cnt1 = 0, ele1 = 0;
        int cnt2 = 0, ele2 = 0;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (cnt1 == 0 && cnt2 == 0) {
                cnt1++;
                ele1 = nums[i];
            } else if (ele1 == nums[i]) {
                cnt1++;
            } else if (ele2 == nums[i]) {
                cnt2++;
            } else if (cnt1 != 0 && ele1 != nums[i] && cnt2 == 0) {
                ele2 = nums[i];
                cnt2++;
            } else if (cnt2 != 0 && ele2 != nums[i] && cnt1 == 0) {
                ele1 = nums[i];
                cnt1++;
            } else if (cnt1 && cnt2 && ele1 != nums[i] && ele2 != nums[i]) {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;

        for (int x : nums) {
            if (x == ele1)
                cnt1++;
            else if (x == ele2)
                cnt2++;
        }

        if (cnt1 > nums.size() / 3)
            ans.push_back(ele1);
        if (cnt2 > nums.size() / 3)
            ans.push_back(ele2);

        return ans;
    }
};