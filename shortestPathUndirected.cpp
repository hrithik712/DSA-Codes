#include<unordered_map>
#include<list>
#include<queue>
vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	//creating adjancey list ... 
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++)
	{
		int u = edges[i].first;
		int v = edges[i].second;

		// ye undirected graph hai .. 
		// ess liye 2 edges banegi ... 
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// bfs karo .. 
	unordered_map<int, bool> visited;
	unordered_map<int, int> parent;
	queue<int> q;
	q.push(s);
	parent[s] = -1;
	visited[s] = true;

	while(!q.empty())
	{
		int front = q.front();
		q.pop();
		// ab neighbour par traverse karlo .. 
		for(auto i: adj[front])
		{
			if(!visited[i])
			{
				visited[i] = true;
				parent[i] = front;
				q.push(i);
			}
		}
	}
	// now, preparing shorted path .. 
	vector<int> ans;
	int currentNode = t;
	ans.push_back(t);

	while(currentNode != s)
	{
		currentNode = parent[currentNode];
		ans.push_back(currentNode);

	}
	// answer ko reverse karlo ....
	reverse(ans.begin(), ans.end());
	return ans;
}
