class Solution {
public:
    pair<int,int> fun(TreeNode* root){
        if(!root){
            return {INT_MIN,0};
        }
        
        pair<int,int> lst = fun(root->left);
        pair<int,int> rst = fun(root->right);
        int mxsm = max({root->val+max(lst.second,0)+max(rst.second,0),rst.first,lst.first});
        int uni = root->val + max({lst.second,rst.second,0});
        
        return {mxsm,uni};
    }
    int maxPathSum(TreeNode* root) {
        pair<int,int> ans = fun(root);
        return ans.first;
    } 
};