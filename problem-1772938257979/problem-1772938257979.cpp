// Last updated: 3/8/2026, 8:20:57 AM
1class Solution {
2public:
3    int minimumIndex(vector<int>& capacity, int itemSize) {
4        int val=INT_MAX;
5        int ind=-1;
6        for(int i=0;i<capacity.size();i++){
7            if(capacity[i]>=itemSize){
8                if(capacity[i]<val){
9                    val=capacity[i];
10                    ind=i;
11                }
12            }
13        }
14        return ind;
15    }
16};