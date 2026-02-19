// Last updated: 2/19/2026, 11:52:04 AM
1class Solution {
2public:
3    int countBinarySubstrings(string s) {
4        int res=0;
5        int count=1;
6        char curr=s[0];
7        vector<int> v;
8        for(int i=1;i<s.size();i++){
9            if(s[i]==curr) count++;
10            else{
11                v.push_back(count);
12                curr=s[i];
13                count=1;
14            }
15        }
16        v.push_back(count);
17        for(int i=0;i<v.size()-1;i++){
18            res+=min(v[i],v[i+1]);
19        }
20        return res;
21    }
22};