class Solution {
public:
    vector<vector<int>> ans;

    void dfs(int index, vector<int>& nums, vector<int>& temp) {
        if (temp.size() >= 2) {
            ans.push_back(temp);
        }

        unordered_set<int> used; // to avoid duplicates at this depth

        for (int i = index; i < nums.size(); i++) {
            if (!temp.empty() && nums[i] < temp.back()) continue;
            if (used.count(nums[i])) continue;

            used.insert(nums[i]);
            temp.push_back(nums[i]);
            dfs(i + 1, nums, temp);
            temp.pop_back();
        }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> temp;
        dfs(0, nums, temp);
        return ans;
    }
};
