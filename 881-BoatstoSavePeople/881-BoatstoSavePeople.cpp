// Last updated: 7/13/2026, 4:20:04 PM
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(),people.end());
5        int res=0;
6        int l=0;
7        int r=people.size()-1;
8        while(l<=r){
9            if((people[l]+people[r])<=limit){
10                l++;
11                r--;
12            }
13            else if(people[r]<=limit) r--;
14            else l++;
15            res++;
16        }
17        return res;
18    }
19};