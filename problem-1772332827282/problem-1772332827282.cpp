// Last updated: 3/1/2026, 8:10:27 AM
1class Solution {
2public:
3    string trimTrailingVowels(string s) {
4        string res=s;
5        while(!res.empty()){
6            if(res.back()=='a' or res.back()=='e' or res.back()=='i' or res.back()=='o' or res.back()=='u') res.pop_back();
7            else break;
8        }
9        return res;
10    }
11};