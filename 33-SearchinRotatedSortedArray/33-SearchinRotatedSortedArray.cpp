// Last updated: 5/22/2026, 8:28:26 AM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int n=nums.size(),low=0,high=n-1;
5        while(low<=high){
6            int mid=(low+high)/2;
7            if(nums[mid]==target) return mid;
8            if(nums[low]<=nums[mid]){
9                if(nums[low]<=target and target<=nums[mid]) high=mid-1;
10                else low=mid+1;
11            }
12            else{
13                if(nums[mid]<=target and target<=nums[high]) low=mid+1;
14                else high=mid-1;
15            }
16        }
17        return -1;
18    }
19};