// Last updated: 2/14/2026, 8:58:58 PM
1class Solution {
2public:
3    int prefixConnected(vector<string>& words, int k) {
4        int n=words.size();
5        int res=0;
6        unordered_map<string,int> mp;
7        for(string s:words){
8            if(s.size()<k) continue;
9            mp[s.substr(0,k)]++;
10        }
11        for(auto it:mp){
12            if(it.second>=2) res++;
13        }
14        return res;
15    }
16};