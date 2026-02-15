// Last updated: 2/15/2026, 8:49:10 AM
1class Solution {
2public:
3    int firstUniqueFreq(vector<int>& nums) {
4        int n=nums.size();
5        int res=INT_MAX;
6        map<int,pair<int,int>> mp;
7        for(int i=0;i<n;i++){
8            if(mp.find(nums[i])!=mp.end()){
9                mp[nums[i]].first=mp[nums[i]].first+1;
10            }
11            else{
12                mp[nums[i]]={1,i};
13            }
14        }
15        vector<pair<int,int>> v;
16        for(auto it:mp) v.push_back({it.second.first,it.second.second});
17        sort(v.begin(),v.end());
18        n=v.size();
19        if(n==1) return nums[v[0].second];
20        for(int i=0;i<n;i++){
21            if(i==0 and i+1<n){
22                if(v[i].first==v[i+1].first) continue;
23                res=min(res,v[i].second);
24            }
25            else if(i==n-1 and i-1>=0){
26                if(v[i].first==v[i-1].first) continue;
27                res=min(res,v[i].second);
28            }
29            else{
30                if(i+1<n and i-1>=0){
31                    if(v[i].first!=v[i+1].first and v[i].first!=v[i-1].first){
32                        res=min(res,v[i].second);
33                    }
34                }
35            }
36        }
37        if(res==INT_MAX) return -1;
38        return nums[res];
39    }
40};