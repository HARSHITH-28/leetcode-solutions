// Last updated: 5/2/2026, 3:00:10 PM
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4        vector<unordered_map<char,int>> row(9),col(9),box(9);
5        for(int i=0;i<9;i++){
6            for(int j=0;j<9;j++){
7                char c=board[i][j];
8                if(c=='.') continue;
9                int boxind=floor(i/3)*3+floor(j/3);
10                if(row[i].find(c)!=row[i].end() or col[j].find(c)!=col[j].end() or box[boxind].find(c)!=box[boxind].end())
11                    return 0;
12                row[i][c]++;
13                col[j][c]++;
14                box[boxind][c]++;
15            }
16        }
17        return 1;
18    }
19};
20
21