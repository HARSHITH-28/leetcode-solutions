// Last updated: 4/11/2026, 8:11:22 PM
1class Solution {
2public:
3    int countDigitOccurrences(vector<int>& nums, int digit) {
4        int res=0;
5        string s="";
6        for(int i:nums) s+=to_string(i);
7        for(char c:s) if(c==(digit+'0')) res++;
8        return res;
9    }
10};