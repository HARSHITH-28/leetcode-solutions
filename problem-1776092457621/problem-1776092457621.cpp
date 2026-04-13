// Last updated: 4/13/2026, 8:30:57 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long res=0,rem,flag=0;
5        if(x<0){
6            flag=1;
7            x=(long)x*-1;
8        }
9        while(x>0){
10            rem=x%10;
11            res=res*10+rem;
12            x=x/10;
13        }
14        if(res>INT_MAX or res<INT_MIN) return 0;
15        return flag?(int)res*-1:(int)res;
16    }
17};