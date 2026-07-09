// Last updated: 7/9/2026, 11:59:27 AM
1class Solution {
2public:
3    int orangesRotting(vector<vector<int>>& grid) {
4        int n=grid.size(),m=grid[0].size();
5        vector<vector<int>> vis(grid);
6        queue<pair<pair<int,int>,int>> q;
7        int t=0;
8        for(int i=0;i<n;i++){
9            for(int j=0;j<m;j++){
10                if(grid[i][j]==2){
11                    q.push({{i,j},0});
12                }
13            }
14        }
15        while(!q.empty()){
16            auto it=q.front();
17            q.pop();
18            t=it.second;
19            int row=it.first.first;
20            int col=it.first.second;
21            if(row+1<=n-1 and vis[row+1][col]==1){
22                vis[row+1][col]=2;
23                q.push({{row+1,col},t+1});
24            }
25            if(row-1>=0 and vis[row-1][col]==1){
26                vis[row-1][col]=2;
27                q.push({{row-1,col},t+1});
28            }
29            if(col+1<=m-1 and vis[row][col+1]==1){
30                vis[row][col+1]=2;
31                q.push({{row,col+1},t+1});
32            }
33            if(col-1>=0 and vis[row][col-1]==1){
34                vis[row][col-1]=2;
35                q.push({{row,col-1},t+1});
36            }
37        }
38        for(int i=0;i<n;i++){
39            for(int j=0;j<m;j++){
40                if(vis[i][j]==1){
41                    return -1;
42                }
43            }
44        }
45        return t;
46    }
47};