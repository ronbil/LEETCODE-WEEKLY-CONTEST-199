class Solution {
public:
    int ans=0, d;
    vector<int> dfs(TreeNode* root) 
    {
        if(root==NULL)
            return {};
        if(!(root->left)&&!(root->right)) 
            return {1};
        
        vector<int> l=dfs(root->left), r=dfs(root->right);
        
        for(int a : l)
            for(int b : r)
                if((a&&b) && (a+b)<=d)
                    ++ans;
        
        vector<int>ret;
        for(auto a:l)
            if((a+1<=d))
                ret.push_back(a+1);
        
        for(auto a:r)
            if((a+1)<=d)
                ret.push_back(a+1);
        
        return ret;
    }
    int countPairs(TreeNode* root, int distance) {
        d=distance;
        dfs(root);
        return ans;
    }
};
