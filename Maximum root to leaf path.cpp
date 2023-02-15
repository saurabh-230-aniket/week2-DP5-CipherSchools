class Solution{
    public:

    int maxPathSum(Node* root)
    {
        if(root == NULL) return INT_MIN;
        if(root->left == NULL && root->right == NULL) return root->data;
        
        int left = maxPathSum(root->left);
        int right = maxPathSum(root->right);
        
        return root->data + max(left, right);
    }
};