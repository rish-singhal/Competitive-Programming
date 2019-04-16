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
#define mod 1e9 + 7

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    int tt;
    cin >> tt;
    while (tt--)
    {
        LL n;
        cin >> n;
        vector<LL> v(n);
        forn(i, n) cin >> v[i];
        vector<LL> po(n / 2 + 2);
        po[0] = 1;
        for1(i, n / 2 + 1) po[i] = 3 * po[i - 1];
        map<LL, LL> mp;
        forn(h, po[n / 2])
        {
            LL tm = h;
            LL sum = 0;
            for (int i = 0; i < n / 2; i++)
            {
                sum += v[i] * (tm % 3 - 1);
                tm /= 3;
            }
            //cout << sum << endl;
            mp[sum]++;
        }
        LL an = 0;
        forn(h, po[n - n / 2])
        {
            LL tm = h;
            LL sum = 0;
            for (int i = n / 2; i < n; i++)
            {
                sum += v[i] * (tm % 3 - 1);
                tm /= 3;
            }
            //cout << sum << endl;
            an += mp[sum];
        }
        cout << (an - 1) << endl;
    }
    return 0;
}