class Solution {
public:

    void util(TreeNode* root, vector<int>& v){
        if(!root) return;

        util(root->left, v);
        v.push_back(root->val);
        util(root->right, v);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> in;
        util(root, in);
        int min=INT_MAX;

        for(int i=0; i<in.size()-1; i++){
            int j = i+1;
            if(in[j] - in[i] < min){
               min = (in[j] - in[i]);
            }
        }

        return min ;
    }
};
