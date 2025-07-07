#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int a[10010][10010] = {1};
void sm(int x, int y)
{
    incf(o, 1, (y - x + 1) / 2)
    {
        incf(p, 1, (y - x + 1) / 2)
        {
            a[o][p] = 0;
        }
    }
}
int main()
{
    int n;
    cin >> n;
}