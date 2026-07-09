// Last updated: 7/9/2026, 11:28:10 AM
1class Solution {
2public:
3    bool isValid(string s) {
4        stack<int> st;
5        for(char i:s){
6            if(i=='(' or i=='{' or i=='[') st.push(i);
7            else{
8                if(st.empty()) return false;
9                if(st.top()=='(' and i==')') st.pop();
10                else if(st.top()=='[' and i==']') st.pop();
11                else if(st.top()=='{' and i=='}') st.pop();
12                else return false;
13            }
14        }
15        return st.empty();
16    }
17};