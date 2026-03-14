// Last updated: 3/14/2026, 8:44:50 PM
1class Solution {
2public:
3    int minCost(vector<int>& nums1, vector<int>& nums2) {
4        int n=nums1.size();
5        int res=0;
6        unordered_map<int,int> mpo,mp1,mp2;
7        for(int i=0;i<n;i++){
8            mpo[nums1[i]]++;
9            mpo[nums2[i]]++;
10            mp1[nums1[i]]++;
11            mp2[nums2[i]]++;
12        }
13        for(auto it:mpo){
14            if(it.second%2) return -1;
15        }
16        for(auto it:mpo){
17            int a=INT_MIN,b=INT_MIN;
18            if(mp1.find(it.first)!=mp1.end()) a=mp1[it.first];
19            if(mp2.find(it.first)!=mp2.end()) b=mp2[it.first];
20            res+=max(a,b)-mpo[it.first]/2;
21        }
22        return res/2;
23    }
24};