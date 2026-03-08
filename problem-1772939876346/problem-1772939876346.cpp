// Last updated: 3/8/2026, 8:47:56 AM
1class Solution {
2public:
3    int smallestBalancedIndex(vector<int>& nums) {
4        int n=nums.size();
5        vector<long long> pre(n,0),suf(n,0);
6        pre[0]=nums[0];
7        for(int i=1;i<n;i++) pre[i]=pre[i-1]+nums[i];
8        suf[n-1]=nums[n-1];
9        for(int i=n-2;i>=0;i--){
10            if(suf[i+1]>1e14/nums[i]) suf[i]=1e14;
11            else suf[i]=suf[i+1]*nums[i];
12        }
13        for(int i=0;i<n;i++){
14            if(i==0 && i+1<n){
15                if(0==suf[i+1]) return i;
16            }
17            else if(i==n-1 && i-1>=0){
18                if(pre[i-1]==1) return i;
19            }
20            else{ 
21                if(i-1>=0 && i+1<n && pre[i-1]==suf[i+1]) 
22                    return i;
23            }
24        }
25        return -1;
26    }
27};