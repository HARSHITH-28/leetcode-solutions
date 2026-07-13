// Last updated: 7/13/2026, 11:01:30 AM
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        // int c=0;
5        // for(int i=0;i<nums.size();i++){
6        //     if(nums[i]==0) c++;
7        // } 
8        // for(int i=0;i<c;i++){
9        //     nums.erase(find(nums.begin(),nums.end(),0));
10        //     nums.emplace_back(0); 
11        // } 
12        int indz=-1;
13        for(int i=0;i<nums.size();i++){
14            if(nums[i]==0){
15                indz=i;
16                break;
17            }
18        }
19        if(indz==-1) return;
20        for(int i=indz+1;i<nums.size();i++){
21            if(nums[i]!=0){
22                swap(nums[indz],nums[i]);
23                indz++;
24            }
25        }
26    }
27};