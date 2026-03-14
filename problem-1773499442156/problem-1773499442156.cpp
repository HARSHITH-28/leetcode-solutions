// Last updated: 3/14/2026, 8:14:02 PM
1class Solution {
2public:
3    long long gcdSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<int> prem(n,0),preg(n,0);
6        prem[0]=nums[0];
7        for(int i=1;i<n;i++) prem[i]=max(prem[i-1],nums[i]);
8        preg[0]=nums[0];
9        for(int i=1;i<n;i++) preg[i]=gcd(nums[i],prem[i]);
10        int l=0,r=n-1;
11        long long res=0;
12        sort(preg.begin(),preg.end());
13        while(l<r){
14            res+=gcd(preg[l],preg[r]);
15            l++;
16            r--;
17        }
18        return res;
19    }
20};