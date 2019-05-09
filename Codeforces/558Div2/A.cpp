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

LL ans[1005][1005];
LL an(LL a, LL b)
{
    //cout << a << " " << b << " :::" << endl;
    if (ans[a][b] != -1)
        return ans[a][b];
    if (a == b)
        return 0;
    if (b == 0)
        return 1;
    if (a == 0)
        return 0;
    a--;
    b--;
    return max(an(a / 2, b / 2) + an(a - (a / 2), b - (b / 2)), an(a / 2, b - (b / 2)) + an(a - (a / 2), (b / 2)));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL a, b;
    forn(i, 1002)
    {
        forn(j, 1002)
        {
            ans[i][j] = -1;
        }
    }
    cin >> a >> b;
    if (b == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << an(a - 1, b - 1) << endl;
    }
    return 0;
}