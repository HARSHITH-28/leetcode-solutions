// Last updated: 7/15/2026, 9:53:11 AM
1class Solution {
2public:
3    int find(int a,int b){
4        if(b==0) return a;
5        return find(b,a%b);
6    }
7    int gcdOfOddEvenSums(int n) {
8        int sum1=0;
9        int sum2=0;
10        for(int i=1;i<=2*n;i++){
11            if(i%2) sum1+=i;
12            else sum2+=i;
13        }
14        return find(sum1,sum2);
15    }
16};