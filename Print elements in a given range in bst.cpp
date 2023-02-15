void f(Node*root,int lo , int hi,vector<int>&vec)

    {

        if(root==NULL) return;

        if(root->data >= lo)

        f(root->left,lo,hi,vec);

        if(root->data >= lo && root->data <= hi)

        vec.push_back(root->data);

        if(root->data <= hi)

        f(root->right,lo,hi,vec);

    }

    vector<int> printNearNodes(Node *root, int low, int high) {

        //code here   

        vector<int>res;

        f(root,low,high,res);

        return res;

    }

