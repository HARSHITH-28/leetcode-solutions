// Last updated: 7/14/2026, 10:58:29 AM
1class Solution {
2public:
3    int twoCitySchedCost(vector<vector<int>>& costs) {
4        int res=0;
5        sort(costs.begin(),costs.end(),[](vector<int>& a,vector<int>& b){
6            return (a[0]-a[1]) < (b[0]-b[1]);
7        });
8        for(int i=0;i<costs.size()/2;i++) res+=costs[i][0];
9        for(int i=(costs.size()/2);i<costs.size();i++) res+=costs[i][1];
10        return res;
11    }
12};