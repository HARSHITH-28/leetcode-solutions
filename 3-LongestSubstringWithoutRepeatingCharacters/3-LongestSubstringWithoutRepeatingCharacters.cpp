// Last updated: 7/22/2026, 10:59:54 PM
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<char> v;
5        int len=0;
6        for(char c:s){
7            auto itr=find(v.begin(),v.end(),c);
8            if(itr!=v.end())
9                v.erase(v.begin(),itr+1); 
10            v.push_back(c);
11            len=max(len,(int)v.size());
12        }
13        return len;
14    }
15};