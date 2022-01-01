#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll c[1008432];
bool visited[100005];
vector<ll> edges[100005];
ll dfs(ll v)
{
    ll mn = c[v];
    visited[v] = 1;
    for (ll x : edges[v])
    {
        if (!visited[x])
        {
            mn = min(mn, dfs(x));
        }
    }
    return mn;
}
main()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 0; i < n; ++i)
        cin >> c[i];
    for (ll i = 0; i < m; ++i)
    {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            ans += dfs(i);
        }
    }
    cout << ans << "\n";
}
