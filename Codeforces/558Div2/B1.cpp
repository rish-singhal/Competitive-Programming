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
    LL n;
    cin >> n;
    LL co[11];
    forn(i, 11) co[i] = 0;
    vector<LL> v(n);
    LL an = 1;
    forn(i, n) cin >> v[i];
    forn(j, n)
    {
        co[v[j]]++;
        vector<LL> x;
        forn(i, 11)
        {
            if (co[i] != 0)
            {
                x.pb(co[i]);
                //cout << co[i] << " ";
            }
        }
        //cout << endl;
        srt(x);

        if (x.size() == 1)
        {
            an = j + 1;
            //cout << "1-\n";
            continue;
        }
        else
        {
            //cout << "2-\n";
            LL l = x[1];
            LL f = 0;
            for (int i = 1; i < x.size(); i++)
            {

                if (x[i] != l)
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0 && x[0] == 1)
            {
                an = j + 1;

                continue;
            }
            else
            {
                reverse(all(x));

                //  cout << "4-\n";
                LL l = x[0] - 1;
                f = 0;
                for (int i = 1; i < x.size(); i++)
                {
                    if (x[i] != l)
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                {
                    an = j + 1;
                    continue;
                }
            }
        }
    }
    cout << an << endl;
    return 0;
}