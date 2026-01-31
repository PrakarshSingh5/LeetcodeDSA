class Solution {
public:
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,
                    int prestart, int preend,
                    int instart, int inend) {

        // Base case
        if (prestart > preend || instart > inend)
            return NULL;

        // Root from preorder
        TreeNode* root_node = new TreeNode(preorder[prestart]);

        // Find root in inorder
        int val = instart;
        for (int i = instart; i <= inend; i++) {
            if (inorder[i] == preorder[prestart]) {
                val = i;
                break;
            }
        }

        // Size of left subtree
        int leftSize = val - instart;

        // Build left subtree
        root_node->left = build(
            preorder, inorder,
            prestart + 1,
            prestart + leftSize,
            instart,
            val - 1
        );

        // Build right subtree
        root_node->right = build(
            preorder, inorder,
            prestart + leftSize + 1,
            preend,
            val + 1,
            inend
        );

        return root_node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(
            preorder, inorder,
            0, preorder.size() - 1,
            0, inorder.size() - 1
        );
    }
};
