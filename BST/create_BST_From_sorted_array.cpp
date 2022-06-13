class Solution {
public:

    TreeNode* createTree(int start, int end, vector<int> nums){
        if(start > end) return NULL;

        int mid = (start + end)/2;
        TreeNode* r = new TreeNode(nums[mid]);
        r->left = createTree(start, mid-1, nums);
        r->right = createTree(mid+1, end, nums);

        return r;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createTree(0, nums.size()-1, nums);
    }
};
