#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
double s[100010] = {0};
double a[100010];
int main()
{
    int n, m;
    cin >> n >> m;

    incf(i, 1, n)
    {
        incf(k, 1, m) a[k] = 0;
        incf(j, 1, m)
        {
            cin >> a[j];
        }
        sort(a + 1, a + m + 1);
        incf(o, 2, m - 1)
        {
            s[i] += a[o];
        }
        s[i] = 1.0 * (s[i]) / (m - 2);
    }
    sort(s + 1, s + n + 1);
    printf("%.2f", s[n]);
}