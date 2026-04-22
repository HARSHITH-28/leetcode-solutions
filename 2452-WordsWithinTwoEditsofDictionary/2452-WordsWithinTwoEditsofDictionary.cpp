// Last updated: 4/22/2026, 10:30:49 AM
1class Solution {
2public:
3    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
4        vector<string> res;
5        for(auto q:queries){
6            for(auto s:dictionary){
7                int cnt=0;
8                for(int i=0;i<q.size();i++){
9                    if(q[i]!=s[i]) cnt++;
10                }
11                if(cnt<=2){
12                    res.push_back(q);
13                    break;
14                }
15            }
16        }
17        return res;
18    }
19};