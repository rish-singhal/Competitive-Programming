#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define vi vector<int>
#define srt(a) sort(a.begin(), a.end());
#define se second
#define fi first
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
vector<int> adj[300005];
int ch[300005];
int cc = 0;
int dfs(int u, int p)
{
    if (adj[u].size() == 0)
    {
        cc++;
        return 1;
    }
    int sum = 0;
    int mm = 1e9;
    for (auto i : adj[u])
    {
        if (i != p)
        {
            int vv = dfs(i, u);
            sum += vv;
            mm = min(mm, vv);
        }
    }
    return ch[u] ? mm : sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    int n;
    cin >> n;
    forn(i, n) cin >> ch[i];
    for1(i, n - 1)
    {
        int x;
        cin >> x;
        adj[x - 1].push_back(i);
    }
    int v = dfs(0, -1);
    cout << (cc - v + 1) << endl;
    return 0;
}