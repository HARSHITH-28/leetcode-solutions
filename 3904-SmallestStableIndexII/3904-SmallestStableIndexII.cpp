// Last updated: 9/5/2026, 12:05:18 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        vector<int> pref(nums.size()),suff(nums.size());
5        pref[0]=nums[0];
6        for(int i=1;i<nums.size();i++) pref[i]=max(nums[i],pref[i-1]);
7        suff[nums.size()-1]=nums[nums.size()-1];
8        for(int i=nums.size()-2;i>=0;i--) suff[i]=min(nums[i],suff[i+1]);
9        for(int i=0;i<nums.size();i++) if((pref[i]-suff[i])<=k) return i;
10        return -1;
11    }
12};