// Last updated: 3/1/2026, 9:47:25 AM
1class Solution {
2public:
3    int minPartitions(string n) {
4        int res=INT_MIN;
5        for(char c:n) res=max(res,c-'0');
6        return res;
7    }
8};