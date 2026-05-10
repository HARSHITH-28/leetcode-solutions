// Last updated: 5/10/2026, 9:44:01 AM
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        int n=nums.size(),res=1,count=1;
6        if(nums.empty()) return 0;
7        for(int i=0;i<n-1;i++){
8            if(nums[i]+1==nums[i+1]){
9                count++;
10                res=max(res,count);
11            }
12            else if(nums[i]==nums[i+1]){
13                continue;
14            }
15            else{
16                count=1;
17            }
18        }
19        return res;
20    }
21};