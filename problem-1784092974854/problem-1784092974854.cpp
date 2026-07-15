// Last updated: 7/15/2026, 10:52:54 AM
1class Solution {
2public:
3    bool find(int ind,vector<int>& nums,int csum,vector<vector<int>>& dp,int tot){
4        if(csum==tot) return true;
5        if(ind==nums.size()) return false;
6        if(dp[ind][csum]!=-1) return dp[ind][csum];
7        bool nt=find(ind+1,nums,csum,dp,tot);
8        bool t=false;
9        if((csum+nums[ind])<=tot){
10            // t=true;
11            // dp[ind][csum]=find(ind+1,nums,csum+nums[ind],dp,tot);
12            t=find(ind+1,nums,csum+nums[ind],dp,tot);
13            dp[ind][csum]=t;
14        }
15        return t or nt;
16    }
17    bool canPartition(vector<int>& nums) {
18        int tot=accumulate(nums.begin(),nums.end(),0);
19        if(tot%2) return false;
20        vector<vector<int>> dp(nums.size()+1,vector<int>((tot/2)+1,-1));
21        return find(0,nums,0,dp,tot/2);
22    }
23};