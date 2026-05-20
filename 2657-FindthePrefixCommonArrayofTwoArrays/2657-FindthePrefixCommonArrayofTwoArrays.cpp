// Last updated: 5/20/2026, 1:48:11 PM
1class Solution {
2public:
3    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
4        int n=A.size();
5        vector<int> res(n,0);
6        set<int> s;
7        for(int i=0;i<n;i++){
8            s.insert(A[i]);
9            s.insert(B[i]);
10            res[i]=(i+1)*2-s.size();
11        }
12        return res;
13    }
14};