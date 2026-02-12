// Last updated: 2/12/2026, 4:41:44 PM
1class Solution {
2public:
3    int longestBalanced(string s) {
4        int n=s.size();
5        int res=INT_MIN;
6        for(int i=0;i<n;i++){
7            unordered_map<char,int> mp;
8            for(int j=i;j<n;j++){
9                mp[s[j]]++;
10                bool flag=true;
11                int prev=mp[s[i]];
12                for(auto it:mp){
13                    if(prev!=it.second) flag=false;
14                }
15                if(flag) res=max(res,j-i+1);
16            }
17        }
18        return res;
19    }
20};