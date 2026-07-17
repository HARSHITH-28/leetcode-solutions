// Last updated: 7/17/2026, 11:10:51 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool hasPathSum(TreeNode* root, int targetSum) {
15        return find(root,targetSum);
16    }
17    bool find(TreeNode* root,int target){
18        if(!root) return 0;
19        if(!(root->left) && !(root->right)) return root->val==target;
20        bool l=find(root->left,target-root->val);
21        bool r=find(root->right,target-root->val);
22        return l or r;
23    }
24};