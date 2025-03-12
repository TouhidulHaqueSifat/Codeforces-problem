#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>adj;
vector<int>visited;
bool has_cycle = false;
vector<int> ans;
void dfs(int node)
{
    visited[node] = 1;
    for(auto v:adj[node])
    {
        if(visited[v] == 1)
        {
            has_cycle = true;
            return;
        }
        if(visited[v] == 0)
        {
            dfs(v);
        }
    }
    visited[node] = 2;
    ans.push_back(node);
}

void topologicalsort(int nodes)
{
    visited.assign(nodes+1, 0);
    for(int i=1;i<=nodes;i++)
    {
        if(visited[i] == 0)
        {
            dfs(i);
        }
    }
    if(has_cycle)
    {
        cout<<"IMPOSSIBLE";
    }
    else
    {
        reverse(ans.begin(), ans.end());
        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout << endl;
    }

}
int main()
{
    int nodes, edge;
    cin>>nodes>>edge;
    adj.resize(nodes + 1);
    for(int i=1; i<=edge; i++)
    {
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
    }


    topologicalsort(nodes);

}
