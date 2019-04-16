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
    int n;
    cin >> n;
    vector<string> s(n);
    forn(i, n) cin >> s[i];
    string r;
    cin >> r;
    int c1 = 0, u = 0, d = 0;
    for (auto ss : s)
    {
        string x = ss;
        string y = ss;
        int i = 0;
        forn(i, ss.size())
        {
            if (ss[i] == '*')
                x[i] = 'a', y[i] = 'z';
        }
        if (x < r && y < r)
        {
            u++;
        }
        else if (x > r && y > r)
        {
            d++;
        }
    }
    //cout << u << " " << d << endl;
    LL l = u + 1;
    LL dd = n + 1 - d;
    while (l <= dd)
    {
        cout << l << " ";
        l++;
    }
    cout << endl;
    return 0;
}