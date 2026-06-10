// Last updated: 6/10/2026, 10:52:54 PM
1class Solution {
2public:
3    long long maxTotalValue(vector<int>& nums, int k) {
4       int maxi=INT_MIN;
5       int mini=INT_MAX;
6       for(int i:nums){
7        mini=min(mini,i);
8        maxi=max(maxi,i);
9       }
10       return (long long)(maxi-mini)*k;
11    }
12};