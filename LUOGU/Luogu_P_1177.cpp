#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
ll a[100010];
int main()
{
    ll n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    incf(i, 1, n)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " ";
        }
    }
}