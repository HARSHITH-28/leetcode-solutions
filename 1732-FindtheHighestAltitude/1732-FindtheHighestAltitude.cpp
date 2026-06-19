// Last updated: 6/19/2026, 11:11:30 AM
1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int res=0;
5        int presum=0;
6        for(int i:gain){
7            presum+=i;
8            res=max(res,presum);
9        }
10        return res;
11    }
12};