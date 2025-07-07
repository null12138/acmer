#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
string name[1010];
int maxn = 0;
int s;
int a[1010], b[1010], c[1010], d[1010];
int main()
{
    int n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> name[i] >> a[i] >> b[i] >> c[i];
        d[i] = a[i] + b[i] + c[i];
    }
    decf(i, n, 1)
    {
        maxn = max(maxn, d[i]);
        if (maxn == d[i])
        {
            s = i;
        }
    }
    cout << name[s] << " " << a[s] << " " << b[s] << " " << c[s];
}