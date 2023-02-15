class Solution {
public:
    pair<int,int> rec(TreeNode* root){
        if(!root)
            return {0,INT_MIN};
        pair<int,int> l =rec(root->left);
        pair<int,int> r = rec(root->right);

        int d = max({l.first+r.first+1,l.second,r.second});
        int h = max(1+l.first,1+r.first);

        return {h,d};
    }
    int diameterOfBinaryTree(TreeNode* root) {
        pair<int,int> p=rec(root);
        return p.second-1;
    }
};