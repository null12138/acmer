#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int ifz(int x)
{
    int cnt = 1;
    incf(o, 2, x)
    {
        if (x % o == 0 && x != o)
        {
            cnt = 0;
            break;
        }
    }
    return cnt;
}
int ans;
int main()
{
    int n;
    cin >> n;
    incf(i, 2, sqrt(n))
    {
        if (ifz(i) == 1 && n % i == 0)
        {
            ans = n / i;
            break;
        }
    }
    cout << ans;
}