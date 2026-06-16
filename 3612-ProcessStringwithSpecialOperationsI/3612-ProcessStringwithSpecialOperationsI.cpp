// Last updated: 6/16/2026, 4:59:04 AM
1class Solution {
2public:
3    string processStr(string s) {
4        string res;
5        for(char c:s){
6            if(c>='a' && c<='z') res.push_back(c);
7            else if(c=='*' && !res.empty()) res.pop_back();
8            else if(c=='#') res+=res;
9            else reverse(res.begin(),res.end());
10        }
11        return res;
12    }
13};