// Last updated: 7/28/2026, 11:54:19 AM
1class Solution {
2public:
3    string smallestPalindrome(string s) {
4        string a,b;
5        char ch='0';
6        if(s.size()%2){
7            ch=s[s.size()/2];
8            s.erase(s.size()/2,1);
9        }
10        map<char,int> mp;
11        for(char c:s) mp[c]++;
12        for(auto it:mp){
13            int freq=it.second/2;
14            while(mp[it.first]>freq){
15                a.push_back(it.first);
16                mp[it.first]--;
17            }
18        }
19        for(auto it:mp){
20            while(mp[it.first]){
21                b.push_back(it.first);
22                mp[it.first]--;
23            }
24        }
25        reverse(b.begin(),b.end());
26        if(ch!='0') a.push_back(ch);
27        return a+b;
28    }
29};