// Last updated: 7/25/2026, 7:49:17 PM
1class Solution {
2public:
3    int maxProduct(int n) {
4        vector<int> v;
5        while(n>0){
6            v.emplace_back(n%10);
7            n/=10;
8        }
9        sort(v.begin(),v.end(),[](int a,int b){
10            return a>b;
11        });
12        return v[0]*v[1];
13    }
14};