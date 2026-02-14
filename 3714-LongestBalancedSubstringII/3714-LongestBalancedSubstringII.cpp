// Last updated: 2/14/2026, 10:27:24 AM
1class Solution {
2public:
3    int longestBalanced(string s) {
4        int n=s.size();
5        int res=1;
6
7        int len=1;
8        char ele=s[0];
9        for(int i=1;i<n;i++){
10            if(s[i]==ele) len++;
11            else{
12                ele=s[i];
13                len=1;
14            }
15            res=max(res,len);
16        }
17        
18        {
19            unordered_map<long long,int> mp;
20            mp[0]=-1;
21            int diff=0;
22            for(int i=0;i<n;i++){
23                if(s[i]!='a' and s[i]!='b'){
24                    mp.clear();
25                    mp[0]=i;
26                    diff=0;
27                    continue;
28                }
29                if(s[i]=='a') diff++;
30                else diff--;
31                if(mp.count(diff)) res=max(res,i-mp[diff]);
32                else mp[diff]=i;
33            }            
34        }
35
36        {
37            unordered_map<long long,int> mp;
38            mp[0]=-1;
39            int diff=0;
40            for(int i=0;i<n;i++){
41                if(s[i]!='a' and s[i]!='c'){
42                    mp.clear();
43                    mp[0]=i;
44                    diff=0;
45                    continue;
46                }
47                if(s[i]=='a') diff++;
48                else diff--;
49                if(mp.count(diff)) res=max(res,i-mp[diff]);
50                else mp[diff]=i;
51            }        
52        }
53
54       
55        {
56            unordered_map<long long,int> mp;
57            mp[0]=-1;
58            int diff=0;
59            for(int i=0;i<n;i++){
60                if(s[i]!='b' and s[i]!='c'){
61                    mp.clear();
62                    mp[0]=i;
63                    diff=0;
64                    continue;
65                }
66                if(s[i]=='b') diff++;
67                else diff--;
68                if(mp.count(diff)) res=max(res,i-mp[diff]);
69                else mp[diff]=i;
70            }
71        }
72
73        unordered_map<long long,int> mp;
74        mp[0]=-1;
75        int c1=0,c2=0,c3=0;
76        for(int i=0;i<n;i++){
77            if(s[i]=='a') c1++;
78            else if(s[i]=='b') c2++;
79            else c3++;
80            int d1=c2-c1;
81            int d2=c3-c1;
82            long long key=((long long)d1<<32)^(unsigned int)d2;
83            if(mp.count(key)) res=max(res,i-mp[key]);
84            else mp[key]=i;
85        }
86
87        return res;
88    }
89};