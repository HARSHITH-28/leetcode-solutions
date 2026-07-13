// Last updated: 7/13/2026, 11:02:06 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4        unordered_map<int,int> mp;
5        int t,n=nums.size();
6        for(int i=0;i<n;i++){
7            t=target-nums[i];
8            if(mp.find(t)!=mp.end())
9                return {mp[t],i};
10            mp[nums[i]]=i;
11        }
12        return {};
13    }
14};