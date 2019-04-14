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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> v(m);
    vector<int> w(n);
    int bb[n][m];
    int an[n][m];
    forn(i, m) cin >> v[i];
    forn(i, n) cin >> w[i];
    forn(i, n) forn(j, m) cin >> bb[i][j];
    forn(i, n)
    {
        forn(j, m)
        {
            if (!bb[i][j])
            {
                bb[i][j] = 0;
                continue;
            }
            bb[i][j] = min(v[j], w[i]);
        }
    }
    forn(i, n)
    {
        forn(j, m)
        {
            cout << bb[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}