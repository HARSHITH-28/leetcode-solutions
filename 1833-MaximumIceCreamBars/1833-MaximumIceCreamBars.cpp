// Last updated: 6/21/2026, 12:47:04 PM
1class Solution {
2public:
3    int maxIceCream(vector<int>& costs, int coins) {
4        int res=0;
5        int sum=0;
6        sort(costs.begin(),costs.end());
7        for(int i:costs){
8            sum+=i;
9            if(sum>coins) break;
10            res++;
11        }
12        return res;
13    }
14};