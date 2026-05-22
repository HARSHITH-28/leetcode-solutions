// Last updated: 5/22/2026, 12:14:36 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int pivot,res=-1;
5        int n=nums.size();
6        int low=0,high=n-1;
7        while(low<=high){
8            int mid=low+(high-low)/2;
9            if(nums[mid]>nums[n-1]) low=mid+1;
10            else high=mid-1;
11        }
12        pivot=low;
13        if(target>=nums[pivot] && target<=nums[n-1]){
14            low=pivot;
15            high=n-1;
16        }
17        else{
18            low=0;
19            high=pivot-1;
20        }
21        while(low<=high){
22            int mid=low+(high-low)/2;
23            if(nums[mid]==target){
24                res=mid;
25                break;
26            }
27            if(target>nums[mid]) low=mid+1;
28            else high=mid-1;
29        }
30        return res;
31    }
32};