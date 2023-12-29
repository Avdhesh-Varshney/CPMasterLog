// https://leetcode.com/problems/design-graph-with-shortest-path-calculator/description/?envType=daily-question&envId=2023-11-11

class Graph {
    vector<vector<pair<int, int>>> adj;
    int size;
public:
    Graph(int n, vector<vector<int>>& edges) {
        size = n;
        adj.resize(n);
        for(auto &edge : edges)
            adj[edge[0]].emplace_back(make_pair(edge[1], edge[2]));
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].emplace_back(make_pair(edge[1], edge[2]));
    }
    
    int shortestPath(int node1, int node2) {
        priority_queue< pair<int, int>, vector< pair<int, int> >, greater< pair<int, int> > > pq;
        vector<int> dist(size, INT_MAX);
        pq.push(make_pair(0, node1));
        dist[node1] = 0;
        while(!pq.empty()) {
            int node = pq.top().second, d = pq.top().first;
            pq.pop();
            if(node == node2) return d;
            if(d > dist[node]) continue;
            for(auto &neigh : adj[node]) {
                if(d + neigh.second < dist[neigh.first]) {
                    dist[neigh.first] = d + neigh.second;
                    pq.push(make_pair(d + neigh.second, neigh.first));
                }
            }
        }
        return -1;
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */