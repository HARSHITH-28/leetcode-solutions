// Last updated: 7/20/2026, 10:21:33 AM
1class Solution {
2public:
3    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
4        int rows=grid.size(),cols=grid[0].size();
5        vector<vector<int>> res(grid);
6        for(int i=0;i<k;i++){
7            vector<vector<int>> v(rows,vector<int>(cols,-1));
8            for(int r=0;r<rows;r++){
9                for(int c=0;c<cols;c++){
10                    if(r==rows-1 && c==cols-1) v[0][0]=res[r][c];
11                    else if(c==cols-1) v[r+1][0]=res[r][c];
12                    else v[r][c+1]=res[r][c];
13                }
14            }
15            for(int r=0;r<rows;r++){
16                for(int c=0;c<cols;c++){
17                    res[r][c]=v[r][c];
18                }
19            }
20        }
21        return res;
22    }
23};