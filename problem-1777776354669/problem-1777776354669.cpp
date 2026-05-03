// Last updated: 5/3/2026, 8:15:54 AM
1class Solution {
2public:
3    vector<int> countOppositeParity(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> res(n,0);
6        int oddc=0,evenc=0;
7        for(int i=n-1;i>0;i--){
8            if(nums[i]%2) oddc++;
9            else evenc++;
10            if(nums[i-1]%2) res[i-1]=evenc;
11            else res[i-1]=oddc;
12        }
13        return res;
14    }
15};