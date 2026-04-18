// Last updated: 4/18/2026, 12:49:05 PM
1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4        vector<int> v(rowIndex+1,1);
5        long long val=1;
6        for(int i=1;i<v.size()-1;i++){
7            val=val*(rowIndex+1-i);
8            val=val/i;
9            v[i]=val;
10        }
11        return v;
12    }
13};