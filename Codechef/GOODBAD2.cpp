#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
const LL mm = 1e9 + 7;
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        cin >> n;
        int m = 1 << n;
        vector<LL> a(m), b(m);
        forn(i, m)
        {
            scanf("%lld", &a[i]);
            b[i] = a[i] = (a[i] * i) % mm;
        }
        forn(i, n)
        {
            forn(j, m)
            {
                if (j & 1 << i)
                {
                    a[j] = (a[j] + a[j ^ (1 << i)]) % mm;
                    b[j ^ (1 << i)] = (b[j] + b[j ^ (1 << i)]) % mm;
                }
            }
        }
        int q;
        scanf("%d", &q);
        while (q--)
        {
            int r, e;
            scanf("%d%d", &r, &e);
            printf("%lld\n", e == 1 ? b[r] : a[r]);
        }
    }
    return 0;
}