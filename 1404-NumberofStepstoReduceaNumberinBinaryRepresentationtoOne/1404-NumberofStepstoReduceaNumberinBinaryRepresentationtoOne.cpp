// Last updated: 2/26/2026, 3:57:12 PM
1class Solution {
2public:
3    int numSteps(string s) {
4        int i=0;
5        int cnt=0;
6        while(s.size()!=1){
7            if(s.back()!='0'){
8                for(i=s.size()-1;i>=0 && s[i]!='0';i--){
9                    s[i]='0';
10                }
11                if(i>=0) s[i]='1';
12                else s.insert(0,1,'1');
13            }
14            else{
15                s.pop_back();
16            }
17            cnt++;
18        }
19        return cnt;
20    }
21};