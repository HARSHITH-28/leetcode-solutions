// Last updated: 5/27/2026, 12:30:14 PM
1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        unordered_map<char,int> mp;
5        vector<int> res(26,0);
6        for(char c:word){
7            mp[c]++;
8            if(c>='a' && c<='z' && res[c-'a']==-1) continue;
9            if(c>='A' && c<='Z' && res[c-'A']==-1) continue;
10            if(c>='A' && c<='Z' && mp.find(tolower(c))!=mp.end()) res[c-'A']=1;
11            if(c>='a' && c<='z' && mp.find(toupper(c))!=mp.end()) res[c-'a']=-1;
12        }
13        int ans=0;
14        for(int i=0;i<26;i++) if(res[i]==1) ans++;
15        return ans;
16    }
17};