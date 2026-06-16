// Last updated: 6/16/2026, 5:10:11 AM
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int i=1,j=prices.size(),min=prices[0],diff=0;
5        for(int i=1;i<j;i++){
6            if(prices[i]<min)
7                min=prices[i];
8            else
9                diff=max(diff,prices[i]-min);
10        }
11        return diff;
12    }
13};