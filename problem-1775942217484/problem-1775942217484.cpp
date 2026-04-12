// Last updated: 4/12/2026, 2:46:57 AM
1class Solution {
2public:
3    vector<int> findDegrees(vector<vector<int>>& matrix) {
4        int n=matrix.size();
5        vector<int> res(n,0);
6        for(int i=0;i<n;i++){
7            for(int j=0;j<n;j++){
8                if(matrix[i][j]){
9                    res[i]+=1;
10                }
11            }
12        }
13        return res;
14    }
15};