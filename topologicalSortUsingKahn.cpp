#include <bits/stdc++.h> 
#include<unordered_map>
#include<queue>
#include<queue>
#include<list>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // creating adj list ...
    unordered_map<int, list<int>> adj; 
    for(int i=0; i<e; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }
    // find all indegreee. 
    vector<int> indegree(v);
    for(auto i:adj)
    {
        for(auto j: i.second)
        {
            indegree[j]++;
        }
    }
    // 0 indgree walo ko push kardo .. 
    queue<int> q;
    for(int i=0; i<v; i++)
    {
        if(indegree[i] == 0)
        q.push(i);
    }
    // do bfs ... 
    vector<int> ans;
    while(!q.empty())
    {
        int front = q.front();
        q.pop();
        // ans ko store karlo .. 
        ans.push_back(front);

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
    return ans;
}