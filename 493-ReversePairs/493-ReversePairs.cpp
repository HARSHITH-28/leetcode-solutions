// Last updated: 4/20/2026, 4:27:11 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int res=INT_MIN,pre=1,suf=1,n=nums.size();
5        for(int i=0;i<n;i++){
6            if(pre==0) pre=1;
7            if(suf==0) suf=1;
8            pre*=nums[i];
9            suf*=nums[n-i-1];
10            res=max(res,max(pre,suf));
11        }
12        return res;
13    }
14};