class Solution {
public:
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       
        if(nums.size() == 0){return NULL;}
        if(nums.size() == 1){return new TreeNode(nums[0]); }
         int n=nums.size()/2;
        TreeNode* root=new TreeNode(nums[n]);
      
        vector<int>left(nums.begin(), nums.begin()+n);
        // for(int i=0;i<n;i++){
        //     left.push_back(nums[i]);
        // }
       vector<int>right(nums.begin()+n+1, nums.end());
        // for(int i=n;i<nums.size();i++){
        //     right.push_back(nums[i]);
        // }
        root->left=sortedArrayToBST(left);
        root->right=sortedArrayToBST(right);
        return root;
    }
};