int solve(int n, vector<vector<int>> input2)
{

    vector<vector<int>> adj(n + 1);
    for (auto it : input2)
    {
        adj[it[0]].push_back(it[1]);
    }
    queue<int> q;
    q.push(0);
    //  vector<int>vis(n,false);
    //  vis[0]=true;
    bool falg = true;
    while (!q.empty())
    {
        int size = q.size();
        cout << size << endl;
        while (size--)
        {
            int temp = q.front();
            q.pop();

            if (adj[temp].size() == 0)
            {
                int ans = temp;

                while (size--)
                {
                    int temp2 = q.front();
                    q.pop();
                    if (adj[temp2].size() == 0)
                        ans += temp2;
                }
                return ans;
            }
            else
            {
                for (auto it : adj[temp])
                {
                    q.push(it);
                }
            }
        }
    }
    return 0;
}