// Last updated: 3/16/2026, 10:55:18 PM
1class Solution {
2public:
3    vector<int> shuffle(vector<int>& nums, int n) {
4        vector<int> res;
5        for(int i=0;i<n;i++){
6            res.push_back(nums[i]);
7            res.push_back(nums[i+n]);
8        }
9        return res;
10    }
11};