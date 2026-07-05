// Last updated: 7/5/2026, 8:27:15 AM
1class Solution {
2public:
3    int maxDigitRange(vector<int>& nums) {
4        int res=0;
5        int n=nums.size();
6        vector<int> v;
7        for(int i:nums){
8            int maxi=INT_MIN;
9            int mini=INT_MAX;
10            while(i>0){
11                int rem=i%10;
12                i/=10;
13                maxi=max(maxi,rem);
14                mini=min(mini,rem);
15            }
16            v.push_back(maxi-mini);
17        }
18        int valid=*max_element(v.begin(),v.end());
19        for(int i=0;i<n;i++){
20            if(v[i]==valid) res+=nums[i];
21        }
22        return res;
23    }
24};