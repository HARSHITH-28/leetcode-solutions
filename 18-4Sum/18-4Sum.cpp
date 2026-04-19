// Last updated: 4/19/2026, 12:57:28 PM
1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> res;
5        int n=nums.size();
6        sort(nums.begin(),nums.end());
7        for(int i=0;i<n-3;i++){
8            if(i>0 && nums[i]==nums[i-1]) continue;
9            for(int j=i+1;j<n-2;j++){
10                if(j>i+1 && nums[j]==nums[j-1]) continue;
11                int k=j+1;
12                int l=n-1;
13                while(k<l){
14                    long long sum=(long long)nums[i]+nums[j]+nums[k]+nums[l];
15                    if(sum==target){
16                        vector<int> v={nums[i],nums[j],nums[k],nums[l]};
17                        res.push_back(v);
18                        k++;
19                        l--;
20                        while(k<l && nums[k]==nums[k-1]) k++;
21                        while(k<l && nums[l]==nums[l+1]) l--;
22                    }
23                    else if(sum<target) k++;
24                    else l--;
25                }
26            }
27        }
28        return res;
29    }
30};