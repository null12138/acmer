#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int a[9000000];
int main()
{
    int n, k;
    cin >> n >> k;
    incf(i, 1, n)
    {
        cin >> a[i];
    }
    sort(a, a + n + 1);
    cout << a[k + 1];
}