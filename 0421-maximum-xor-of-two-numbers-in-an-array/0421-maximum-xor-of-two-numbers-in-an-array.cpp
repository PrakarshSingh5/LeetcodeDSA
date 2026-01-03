class Solution {

public:
    struct trieNode {
        trieNode* left;
        trieNode* right;
    };
    void insert(trieNode* root, int& val) {
        trieNode* pCrawl = root;
        for (int i = 31; i >= 0; i--) {
            int i_bit = (val >> i) & 1;
            if (i_bit == 0) {
                if (pCrawl->left == NULL) {
                    pCrawl->left = new trieNode();
                }
                pCrawl = pCrawl->left;

            } else {
                if (pCrawl->right == NULL) {
                    pCrawl->right = new trieNode();
                }
                pCrawl = pCrawl->right;
            }
        }
    }
    int maxXor(trieNode* root, int &val){
        int maxi=0;
        trieNode* temp=root;
        for(int i=31;i>=0;i--){
            int j=(val>>i) & 1;
            if(j==1){
                if(temp->left != NULL){
                    maxi+=pow(2, i);
                    temp=temp->left;
                }else {
                    temp=temp->right;
                }
                
            }else {
                if(temp->right!=NULL){
                    maxi+=pow(2, i);
                    temp=temp->right;
                }else {
                    temp=temp->left;
                }
            }
        }
        return maxi;
    }
    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        trieNode* root = new trieNode();

        for (auto it : nums) {
            insert(root, it);
        }
        int max_res = 0;
        for (int i = 0; i < n; i++) {
            int temp = maxXor(root, nums[i]);
            max_res = max(temp, max_res);
        }
        return max_res;
    }
};
