// Last updated: 4/2/2026, 12:14:31 AM
1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23public:
24    unordered_map<Node*,Node*> visited;
25    Node* cloneGraph(Node* node) {
26        if(!node) return nullptr;
27        if(visited[node]) return visited[node];
28        Node* dup=new Node(node->val);
29        visited[node]=dup;
30        for(auto cur:node->neighbors)
31            dup->neighbors.emplace_back(cloneGraph(cur));
32        return dup;
33    }
34};