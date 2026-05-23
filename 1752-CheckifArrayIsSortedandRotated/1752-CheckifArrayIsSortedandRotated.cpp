// Last updated: 5/23/2026, 10:56:35 AM
1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int rtr=0;
5        for(rtr=0;rtr<nums.size()-1;rtr++){
6            if(nums[rtr]>nums[rtr+1]) break;
7        }
8        for(int i=rtr+1;i<nums.size()-1;i++){
9            if(nums[i]>nums[i+1] or nums[i]>nums[0]) return 0;
10        }
11        if(rtr!=nums.size()-1 and nums[nums.size()-1]>nums[0]) return 0;
12        return 1;
13    }
14};