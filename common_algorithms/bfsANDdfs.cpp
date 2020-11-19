#include <bits/stdc++.h>
using namespace std;

set<int> visited;
vector<vector<int>> graph;

bool dfs(int edge, int destination)
{
    cout<<"edge-->"<<edge<<"dest-->"<<destination<<endl;
    if (visited.find(edge) != visited.end())
    {
        return false;
    }
    if (edge == destination)
        return true;
    visited.insert(edge);
    for (int e : graph[edge])
    {
        if (dfs(e, destination))
            return true;
    }
    return false;
}
bool bfs (int source, int destination){
    queue<int> q;
    q.push(source);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        if(visited.find(t) !=visited.end()){
            return false;
        }
        if(t==destination)
            return true;

        visited.insert(t);   
        for( int e: graph[t]){
            q.push(e);
        }
    }


    return false;
}
int main()
{
    int n, m, temp1, temp2;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<int> tempNode;
        graph.push_back(tempNode);
    }
    for (int j = 0; j < m; j++)
    {
        cin >> temp1 >> temp2;
        graph[temp1].push_back(temp2);
        
    }
    cout<<"Doing dfs from 0 to "<<m-1<<endl;
    if(dfs(0, m-1))
        cout<<"Yes";
    else
        cout<<"No";
    visited.clear();
    cout<<"\nDoing bfs from 0 to "<<m-1<<endl;
    if(dfs(0, m-1))
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
