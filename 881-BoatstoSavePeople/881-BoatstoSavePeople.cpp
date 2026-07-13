// Last updated: 7/13/2026, 4:15:26 PM
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
13            else if(people[r]<=limit){
14                r--;
15            }
16            else {l++;}
17            res++;
18        }
19        return res;
20    }
21};