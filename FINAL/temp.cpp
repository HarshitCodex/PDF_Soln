vector<bool> bigvisited(V, false);
for (int i = 0; i < V; i++)
{
    if (bigvisited[i])
        continue;
    vector<bool> visited(V, false);
    stack<int> s;
    s.push(i);
    visited[i] = true;
    bigvisited[i] = true;
    while (!s.empty())
    {
        int u = s.top();
        s.pop();
        for (int j = 0; j < adj[u].size(); j++)
        {
            int v = adj[u][j];
            if (visited[v])
                return true;
            visited[v] = true;
            bigvisited[v] = true;
            s.push(v);
        }
    }
}
return false;