// Last updated: 3/16/2026, 10:48:03 PM
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> v(n*2);
6        for(int i=0;i<n;i++){
7            v[i]=v[i+n]=nums[i];
8        }
9        return v;
10    }
11};