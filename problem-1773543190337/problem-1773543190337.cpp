// Last updated: 3/15/2026, 8:23:10 AM
1class Solution {
2public:
3    long long countCommas(long long n) {
4        if(n<1000) return 0;
5        string s=to_string(n);
6        int comm=s.size()%3==0?s.size()/3-1:s.size()/3;
7        long long res=0;
8        long long base=1000;
9        for(int i=1;i<=comm;i++){
10            res+=(n-base)+1;
11            base*=1000;
12        }
13        return res;
14    }
15};