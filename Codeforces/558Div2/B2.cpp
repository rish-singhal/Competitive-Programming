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
LL cc[100005];
LL freq[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    LL n;
    cin >> n;
    LL mm = 1e18, ma = -1, mf = 0, af = 0;
    LL an = 1;
    multiset<LL> ss;
    forn(i, n)
    {
        LL x;
        cin >> x;
        cc[x]++;
        auto xx = ss.find(cc[x] - 1);
        if (xx != ss.end())
        {
            ss.erase(xx);
            freq[cc[x] - 1]--;
        }
        ss.insert(cc[x]);
        freq[cc[x]]++;
        // for (auto p : ss)
        // {
        //     cout << p << " ";
        // }
        // cout << endl;
        mm = *ss.begin();
        ma = *ss.rbegin();
        mf = freq[mm];
        af = freq[ma];
        LL sz = ss.size();
        if ((mf == 1 && mm == 1 && af == sz - 1) || (mf == sz - 1 && mm + 1 == ma && af == 1) || (mm == ma && (mm == 1 || sz == 1)))
        {
            an = i + 1;
            // cout << " yaa" << endl;
        }
        //cout << "mm, ma, mf, af -- " << mm << " " << ma << " " << mf << " " << af << endl;
    }
    cout << an << endl;
    return 0;
}