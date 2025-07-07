#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int h, m;
int main()
{
    int s, v, t;
    cin >> s >> v;
    t = s / v;
    cnt = t;
    if (s % v != 0)
    {
        h = 7, m = 49;
    }
    else
    {
        h = 7, m = 50;
    }
    incf(i, 1, cnt)
    {
        m--;
        if (m < 0)
        {
            h--;
            m = 59;
        }
        if (h < 0)
        {
            h = 23;
        }
    }
    if (h < 10)
    {
        cout << 0;
    }
    cout << h << ":";
    if (m < 10)
    {
        cout << 0;
    }
    cout << m;
}