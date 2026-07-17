// Last updated: 7/17/2026, 10:03:41 AM
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
14    int minDepth(TreeNode* root) {
15        return find(root);
16    }
17    int find(TreeNode* root){
18        if(!root) return 0;
19        int l=find(root->left);
20        int r=find(root->right);
21        if(!l) return 1+r;
22        if(!r) return 1+l;
23        return 1+min(l,r);
24    }
25};