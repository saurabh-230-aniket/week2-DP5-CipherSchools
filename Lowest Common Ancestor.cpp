class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
        return NULL;
        if(root==p or root==q)
        return root;
        TreeNode* l = lowestCommonAncestor(root->left,p,q);
        TreeNode* r = lowestCommonAncestor(root->right,p,q);

        if((l==p and r==q) or (r==p and l==q))
        return root;
        else if(!l)
        return r;
        else 
        return l;
    }
};