// Last updated: 7/8/2026, 2:22:33 PM
1class Solution {
2public:
3    int countPrimes(int n) {
4        int res=0;
5        vector<bool> v(n+1,1);
6        v[0]=v[1]=0;
7        for(int i=2;i<n;i++){
8            if(v[i]){
9                res++;
10                for(int j=2*i;j<n;j+=i)
11                    v[j]=0;
12            }
13        }
14        return res;
15    }
16};