// Last updated: 5/30/2026, 12:26:07 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        int res=0;
5        vector<pair<bool,bool>> v(26,{false,false});
6        for(char c:word){
7            if(c>='a' && c<='z') v[c-'a'].first=true;
8            else v[c-'A'].second=true;
9        }
10        for(auto it:v){
11            if(it.first==true && it.second==true) res++;
12        }
13        return res;
14    }
15};