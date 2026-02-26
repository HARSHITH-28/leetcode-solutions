// Last updated: 2/26/2026, 12:40:58 PM
1class Solution {
2public:
3    int numSteps(string s) {
4        int count=0;
5        while(s.size()!=1){
6            if(s.back()=='0') s.pop_back();
7            else{
8                int ind=s.size()-1;
9                while(ind>=0 && s[ind]!='0') s[ind--]='0';
10                if(ind>=0) s[ind]='1';
11                else s.insert(0,1,'1');
12            }
13            count++;
14        }
15        return count;
16    }
17};