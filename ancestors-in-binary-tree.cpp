bool solve(Node* root, int target, vector<int>& ans) {
        if(!root)
            return false;
        
        if(root->data == target)
            return true;
         
        bool left = false;
        bool right = false;
        
        left = solve(root->left, target, ans);
        
        if(!left)
            right = solve(root->right, target, ans);
        
        if(left)
            ans.push_back(root->data);
        
        if(right)
            ans.push_back(root->data);
            
        return (left || right);
    }
    vector<int> Ancestors(struct Node *root, int target)
    {
        if(!root)
            return {};

        vector<int> ans;
        solve(root, target, ans);
        return ans;
    }