// Last updated: 6/6/2026, 11:12:33 AM
1class Solution {
2public:
3    vector<int> leftRightDifference(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> l(n,0),r(n,0),res(n,0);
6        for(int i=1;i<n;i++) l[i]=l[i-1]+nums[i-1];
7        for(int i=n-2;i>=0;i--) r[i]=r[i+1]+nums[i+1];
8        for(int i=0;i<n;i++) res[i]=abs(l[i]-r[i]);
9        return res;
10    }
11};