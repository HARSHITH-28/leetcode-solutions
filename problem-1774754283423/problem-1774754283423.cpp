// Last updated: 3/29/2026, 8:48:03 AM
1class EventManager {
2public:
3    map<int,int> mp1;
4    map<int,set<int>,greater<int>> mp2;
5    EventManager(vector<vector<int>>& events) {
6        for(auto it:events){
7            mp1[it[0]]=it[1];
8            mp2[it[1]].insert(it[0]);
9        }
10    }
11    
12    void updatePriority(int eventId, int newPriority) {
13        int oldp=mp1[eventId];
14        mp2[oldp].erase(eventId);
15        if(mp2[oldp].empty()) mp2.erase(oldp);
16        mp2[newPriority].insert(eventId);
17        mp1[eventId]=newPriority;
18    }
19    
20    int pollHighest() {
21        if(mp2.size()==0) return -1;
22        int res=*((mp2.begin()->second).begin());
23        if((mp2.begin()->second).size()==1) mp2.erase(mp2.begin()->first);
24        else (mp2.begin()->second).erase(res);
25        mp1.erase(res);
26        return res;
27    }
28};
29
30/**
31 * Your EventManager object will be instantiated and called as such:
32 * EventManager* obj = new EventManager(events);
33 * obj->updatePriority(eventId,newPriority);
34 * int param_2 = obj->pollHighest();
35 */