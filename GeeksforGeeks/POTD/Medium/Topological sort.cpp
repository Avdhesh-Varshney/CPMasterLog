// 01 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> indegree(V);
	    for(auto i = 0; i < V; i++) {
	        for(auto &j : adj[i]) indegree[j]++;
	    }
	    queue<int> q;
	    for(int i = 0; i < V; i++)
	        if(!indegree[i]) q.push(i);
	    vector<int> ans;
	    while(!q.empty()) {
	        auto p = q.front();
	        q.pop();
	        ans.emplace_back(p);
	        for(auto &v : adj[p]) {
	            indegree[v]--;
	            if(!indegree[v]) q.push(v);
	        }
	    }
	    return ans;
	}
};

int check(int V, vector<int>& res, vector<int> adj[]) {
    if(V != res.size()) return 0;

    vector<int> map(V, -1);
    for(int i = 0; i < V; i++) map[res[i]] = i;
    for(int i = 0; i < V; i++)
        for(int v: adj[i])
            if(map[i] > map[v]) return 0;
    return 1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int N, E;
        cin >> E >> N;
        int u, v;
        vector<int> adj[N];
        for(int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topoSort(N, adj);
        cout << check(N, res, adj) << endl;
    }
    return 0;
}