class Solution {
public:
    TreeNode* rec(vector<int>& po, vector<int>& io,int i1,int j1,int i2,int j2){
        if(i1>j1 or i2>j2){
            return NULL;
        }
        TreeNode* r=new TreeNode(po[i1]);
        int i;
        for(i=i2;i<=j2;i++){
            if(io[i]==po[i1])
                break;
        }
        r->left=rec(po,io,i1+1,i1+i-i2,i2,i-1);
        r->right=rec(po,io,i1+i-i2+1,j1,i+1,j2);
        return r;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return rec(preorder,inorder,0,preorder.size()-1,0,inorder.size()-1);
    }
};