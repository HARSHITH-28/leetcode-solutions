// Last updated: 7/14/2026, 2:18:24 PM
1class Solution {
2public:
3    int lastStoneWeight(vector<int>& stones) {
4        int res;
5        priority_queue<int> pq;
6        for(int i:stones) pq.push(i);
7        while(pq.size()>1){
8            int f=pq.top();
9            pq.pop();
10            int s=pq.top();
11            pq.pop();
12            if(f!=s) pq.push(abs(f-s));
13        }
14        return pq.empty()?0:pq.top();
15    }
16};