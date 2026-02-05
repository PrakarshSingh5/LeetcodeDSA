class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {
        vector<vector<int>> dist(n, vector<int>(k+2, INT_MAX));
        vector<int> stops(n, 0);
        unordered_map<int, vector<pair<int, int>>> mp;
        for (int i = 0; i < flights.size(); i++) {
            vector<int> temp = flights[i];
            mp[temp[0]].push_back({temp[1], temp[2]});
        }
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                       greater<tuple<int, int, int>>>
            pq;
        // dist[src][node] = 0;
        pq.push({0, 0, src});
        while (!pq.empty()) {
            auto [dis, stop, node] = pq.top();
            pq.pop();
             if (node == dst)
                return dis;
            // if (dis > dist[node]) continue;
             if (stop > k)
                continue;
            for (auto it : mp[node]) {
                int new_node = it.first;
                int new_dis = it.second;
                if((new_dis+dis)<dist[new_node][stop+1]){
                        dist[new_node][stop+1]=new_dis+dis;
                        pq.push({new_dis+dis, stop+1, new_node});
                }
            }
        }
       
        return -1;
    }
};