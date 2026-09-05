// Last updated: 9/5/2026, 12:03:05 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int res=0;
5        vector<int> pref(nums.size()),suff(nums.size());
6        pref[0]=nums[0];
7        for(int i=1;i<nums.size();i++) pref[i]=max(nums[i],pref[i-1]);
8        suff[nums.size()-1]=nums[nums.size()-1];
9        for(int i=nums.size()-2;i>=0;i--) suff[i]=min(nums[i],suff[i+1]);
10        for(int i=0;i<nums.size();i++) if((pref[i]-suff[i])<=k) return i;
11        return -1;
12    }
13};