class Solution {
public:
    void solve(TreeNode* root,int number,int& ans){
        if(!root) return ;
        number=(number*10)+root->val;
        if(!root->left && !root->right){
            ans+=number;
            return;
        }
        solve(root->left,number,ans);
        solve(root->right,number,ans);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        int number=0;
        int ans=0;
        solve(root,number,ans);
        return ans;
    }
};