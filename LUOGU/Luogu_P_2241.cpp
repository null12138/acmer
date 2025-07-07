#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
ll z, c = 0;
int main()
{
    int n, m;
    cin >> n >> m;
    incf(i, 1, n)
    {
        incf(j, 1, m)
        {
            z += (n - i + 1) * (m - j + 1);
            c += min(n - i + 1, m - j + 1); // 正方形
        }
    }
    cout << c << " " << z - c;
}