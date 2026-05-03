// Last updated: 5/3/2026, 8:23:47 AM
1class Solution {
2public:
3    int sumOfPrimesInRange(int n) {
4        string s=to_string(n);
5        reverse(s.begin(),s.end());
6        int r=stoi(s);
7        int l=min(n,r);
8        int h=max(n,r);
9        int res=0;
10        for(int i=l;i<=h;i++){
11            if(check(i)) res+=i;
12        }
13        return res;
14    }
15    bool check(int num){
16        if(num==0 or num==1) return false;
17        for(int i=2;i*i<=num;i++){
18            if(num%i==0) return false;
19        }
20        return true;
21    }
22};