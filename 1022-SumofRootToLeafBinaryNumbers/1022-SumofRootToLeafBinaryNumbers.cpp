// Last updated: 2/24/2026, 10:42:11 PM
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
14    int sumRootToLeaf(TreeNode* root) {
15        if(!root) return 0;
16        int res=0;
17        string s;
18        vector<string> v;
19        find(root,s,v);
20        for(string it:v) res+=stoi(it,nullptr,2);
21        return res;
22    }
23    void find(TreeNode* root,string& s,vector<string>& v){
24        if(!(root->left) && !(root->right)){
25            s.push_back(root->val?'1':'0');
26            v.push_back(s);
27            return;
28        }
29        s.push_back(root->val?'1':'0');
30        if(root->left){
31            find(root->left,s,v);
32            s.pop_back();
33        }
34        if(root->right){
35            find(root->right,s,v);
36            s.pop_back();
37        }
38    }
39};