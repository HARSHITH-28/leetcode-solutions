// Last updated: 2/22/2026, 6:55:21 PM
1class Solution {
2public:
3    int binaryGap(int n) {
4        int res=0;
5        string bs=bitset<32>(n).to_string();
6        int prev=bs.find('1',0);
7        for(int i=prev+1;i<bs.size();i++){
8            if(bs[i]=='1'){
9                res=max(res,i-prev);
10                prev=i;
11            }
12        }
13        return res;
14    }
15};