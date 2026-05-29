// Last updated: 5/29/2026, 8:10:42 PM
1class Solution {
2public:
3    int minElement(vector<int>& nums) {
4        int res=INT_MAX;
5        for(int num:nums){
6            int sum=0;
7            while(num>0){
8                int rem=num%10;
9                sum+=rem;
10                num/=10;
11            }
12            res=min(res,sum);
13        }
14        return res;
15    }
16};