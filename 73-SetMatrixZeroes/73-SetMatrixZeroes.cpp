// Last updated: 4/5/2026, 3:12:12 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4        int n=matrix.size(),m=matrix[0].size();
5        // vector<int> temp1(n,0);
6        // vector<int> temp2(m,0);
7        // for(int i=0;i<n;i++){
8        //     for(int j=0;j<m;j++){
9        //         if(matrix[i][j]==0){
10        //             temp1[i]=1;
11        //             temp2[j]=1;
12        //         }
13        //     }
14        // }
15        // for(int i=0;i<n;i++){
16        //     for(int j=0;j<m;j++){
17        //         if(temp1[i]==1 or temp2[j]==1)
18        //             matrix[i][j]=0;
19        //     }
20        // }
21        int col0=0;
22        for(int i=0;i<n;i++){
23            for(int j=0;j<m;j++){
24                if(matrix[i][j]==0){
25                    matrix[i][0]=0;
26                    if(j==0) col0=1;
27                    else matrix[0][j]=0;
28                }
29            }
30        }
31        for(int i=1;i<n;i++){
32            for(int j=1;j<m;j++){
33                if(matrix[i][0]==0 or matrix[0][j]==0){
34                    matrix[i][j]=0;
35                }
36            }
37        }
38        for(int i=1;i<m;i++){
39            if(matrix[0][0]==0 or matrix[0][i]==0) matrix[0][i]=0;
40        }
41        for(int i=1;i<n;i++){
42            if(matrix[i][0]==0 or col0==1) matrix[i][0]=0;
43        }
44        if(col0==1 or matrix[0][0]==0) matrix[0][0]=0;
45    }
46};