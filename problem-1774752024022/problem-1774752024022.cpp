// Last updated: 3/29/2026, 8:10:24 AM
1class Solution {
2public:
3    int firstMatchingIndex(string s) {
4        int l=0,r=s.size()-1;
5        while(l<=r){
6            if(s[l]==s[r]) return l;
7            l++;
8            r--;
9        }
10        return -1;
11    }
12};