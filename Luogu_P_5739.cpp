#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int ans = 1;
int jc(int x)
{
    if (x != 0)
    {
        ans = ans * x;
        x--;
        jc(x);
    }
    else
    {
        return ans;
    }
    return x;
}
int main()
{
    int n;
    cin >> n;
    jc(n);
    cout << ans;
}