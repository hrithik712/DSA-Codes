#include<unordered_map>
#include<list>
#include<iostream>
using namespace std;
class graph
{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> directed 
        // undirected = 1 -> directed graph..
        // create an edge from u to v .. .
        adj[u].push_back(v);

        if(direction == 0)
        {
            adj[v].push_back(u);
        }
    }
    void printAdjList()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"-> ";
            for(auto j: i.second)
            {
                cout<<j << ", ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the Number of nodes : "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the numebr of edgese : "<<endl;
    cin>>m;
    graph g;

    for(int i=0; i<m; i++)
    {
        int v,u;
        cin>>u>>v;
        // creating an undirected graph .. 
        g.addEdge(v,u,0);
    }
    // printing graph 
    g.printAdjList();

}