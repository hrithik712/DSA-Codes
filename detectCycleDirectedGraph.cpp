#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) 
{
    unordered_map<int, list<int>> adj; 
    for(int i=0; i<edges.size(); i++)
    {
        int u = edges[i].first -1;
        int v = edges[i].second -1;
        adj[u].push_back(v);
    }
    // find all indegreee. 
    vector<int> indegree(n);
    for(auto i:adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }
    // 0 indgree walo ko push kardo .. 
    queue<int> q;
    for(int i=0; i<n; i++)
    {
        if(indegree[i] == 0)
        q.push(i);
    }
    // do bfs ... 
    //vector<int> ans;
    int cnt = 0;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        // ans ko store karlo .. 
        // increment kardo count ko ...
        //ans.push_back(front);
        cnt++;

        // neighbour check karlo .. 
        // neighbour indegree update kardo .. 

        for(auto neighbour: adj [front])
        {
            indegree[neighbour]--;
            if(indegree[neighbour] == 0)
            {
                q.push(neighbour);
            }
        }
    }
    if(cnt == n)
    return false;
    else
    return true;
}