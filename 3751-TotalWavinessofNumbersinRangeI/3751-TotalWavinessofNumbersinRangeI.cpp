// Last updated: 6/4/2026, 10:10:48 PM
1class Solution {
2public:
3    int totalWaviness(int num1, int num2) {
4        int res=0;
5        for(int i=num1;i<=num2;i++){
6            if(i<=100) continue;
7            string s=to_string(i);
8            for(int j=1;j<s.size()-1;j++){
9                int a=s[j-1]-'0';
10                int b=s[j]-'0';
11                int c=s[j+1]-'0';
12                if((b>a && b>c) || (b<a && b<c)) res++;
13            }
14        }
15        return res;
16    }
17};