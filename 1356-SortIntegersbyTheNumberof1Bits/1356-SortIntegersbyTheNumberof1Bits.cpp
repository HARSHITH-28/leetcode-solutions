// Last updated: 2/26/2026, 12:08:43 AM
1class Solution {
2public:
3    vector<int> sortByBits(vector<int>& arr) {
4        vector<int> res(arr);
5        sort(res.begin(),res.end(),[](int a,int b){
6            if(__builtin_popcount(a)==__builtin_popcount(b))
7                return a<b;
8            return __builtin_popcount(a)<__builtin_popcount(b);
9        });
10        return res;
11    }
12};