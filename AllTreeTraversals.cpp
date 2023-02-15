class Solution {
public:
    void pre(TreeNode* root,vector<int> & ans){
        if(!root)
        return;
        ans.push_back(root->val);
        pre(root->left,ans);
        pre(root->right,ans);
    }
    void in(TreeNode* root,vector<int> & ans){
        if(!root)
        return;
        
        pre(root->left,ans);
        ans.push_back(root->val);
        pre(root->right,ans);
    }
    void post(TreeNode* root,vector<int> & ans){
        if(!root)
        return;
        
        pre(root->left,ans);
        pre(root->right,ans);
        ans.push_back(root->val);
    }

    void Traversals(TreeNode* root) {
        vector<int> pr,in,ps;
        pre(root,pr);
        in(root,in);
        post(root,ps);
        
        for(auto x:pr)
        cout<<x<<" ";
        cout<<endl;
        for(auto x:in)
        cout<<x<<" ";
        cout<<endl;
        for(auto x:pst)
        cout<<x<<" ";
        cout<<endl;
    }
};