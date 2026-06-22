// Last updated: 6/22/2026, 12:40:49 PM
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        unordered_map<char,int> mp;
5        for(char c:text) mp[c]++;
6        return min(mp['b'],min(mp['a'],min(mp['l']/2,min(mp['o']/2,mp['n'])))); 
7    }
8};