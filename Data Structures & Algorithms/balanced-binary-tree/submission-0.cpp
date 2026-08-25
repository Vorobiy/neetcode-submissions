class Solution {

    int count; 
public:
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        return dfs(root)[0] == 1;
    }

private:
    vector<int> dfs(TreeNode* root){
        if(!root){
            return {1, 0};
        }

        vector<int> left = dfs(root->left);
        vector<int> right = dfs(root->right);

        bool balanced = (left[0] == 1 && right[0] == 1) && (abs(left[1] - right[1]) <= 1);
        int height = 1 + max(left[1], right[1]);

        if(balanced){
            return {1, height};
        } else {
            return {0, height};
        }
    }
};