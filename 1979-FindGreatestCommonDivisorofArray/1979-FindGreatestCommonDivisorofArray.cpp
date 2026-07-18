// Last updated: 7/18/2026, 10:27:50 AM
1class Solution {
2public:
3    int findGCD(vector<int>& nums) {
4        int s=*min_element(nums.begin(),nums.end());
5        int l=*max_element(nums.begin(),nums.end());
6        return find(s,l);
7    }
8    int find(int a,int b){
9        if(!b) return a;
10        return find(b,a%b);
11    }
12};