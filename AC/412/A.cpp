#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int a[110], b[110], c[110] = {0};
int main()
{
    int n, ans = 0;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> a[i] >> b[i];
        if (b[i] > a[i])
        {
            c[i] = 1;
        }
    }
    incf(i, 1, n)
    {
        ans += c[i];
    }
    cout << ans;
}