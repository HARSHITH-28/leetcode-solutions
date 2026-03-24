// Last updated: 3/24/2026, 5:49:26 PM
1class Solution {
2public:
3    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
4        int n=grid.size(),m=grid[0].size();
5        vector<vector<int>> res(n,vector<int>(m,-1));
6        vector<long long> ft(n*m);
7        for(int i=0;i<n;i++){
8            for(int j=0;j<m;j++){
9                ft[i*m+j]=grid[i][j];
10            }
11        }
12        vector<int> pre(n*m,1),suf(n*m,1);
13        for(int i=1;i<n*m;i++) pre[i]=(pre[i-1]*ft[i-1])%12345;
14        for(int i=n*m-2;i>=0;i--) suf[i]=(suf[i+1]*ft[i+1])%12345;
15        for(int i=0;i<n*m;i++){
16            long long val=(pre[i]*suf[i])%12345;
17            res[i/m][i%m]=val;
18        }
19        return res;
20    }
21};