// Last updated: 2/23/2026, 10:17:51 AM
1class Solution {
2public:
3    bool hasAllCodes(string s, int k) {
4        unordered_set<string> st;
5        for(int i=0;i+k<=s.size();i++){
6            st.insert(s.substr(i,k));
7        }
8        if(st.size()==(1<<k)) return true;
9        return false;
10    }
11};