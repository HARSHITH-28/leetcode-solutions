// Last updated: 6/8/2026, 10:53:56 PM
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> res;
5        int npiv=0;
6        for(int ele:nums){
7            if(ele<pivot) res.emplace_back(ele);
8            if(ele==pivot) npiv++;
9        }
10        for(int i=0;i<npiv;i++) res.emplace_back(pivot);
11        for(int ele:nums) if(ele>pivot) res.emplace_back(ele);
12        return res;
13    }
14};