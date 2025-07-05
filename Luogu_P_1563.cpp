#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
string p[100010];
ll f[100010];
ll a[100010];
ll b[100010];
int main()
{
    ll n, m;
    ll tp = 0;
    cin >> n >> m;
    incf(i, 1, n)
    {
        cin >> f[i] >> p[i];
    }
    incf(i, 1, m)
    {
        cin >> a[i] >> b[i];
    }
    tp = 1;
    incf(i, 1, m)
    {
        if (f[tp] == 0)
        {
            if (a[i] == 0)
            {
                tp -= b[i];
            }
            else
            {
                tp += b[i];
            }
        }
        else
        {
            if (a[i] == 0)
            {
                tp += b[i];
            }
            else
            {
                tp -= b[i];
            }
        }
        while (tp <= 0)
        {
            tp += n;
        }
        while (tp > n)
        {
            tp = tp % n;
        }
    }

    cout << p[tp];
}