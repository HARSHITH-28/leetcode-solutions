// Last updated: 3/16/2026, 10:55:29 PM
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count=0,temp=0,n=nums.size();
5        for(int i=0;i<n;i++){
6            if(nums[i]==1){
7                temp++;
8                count=max(count,temp);
9            }
10            else
11                temp=0;
12        }
13        return count;
14    }
15};