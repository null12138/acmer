#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
struct stu
{
    ll num;
    int s;
    int zs;
    int zh;
} stus[1010];
int main()
{
    int n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> stus[i].num >> stus[i].s >> stus[i].zs;
        stus[i].zh = stus[i].s * 7 + stus[i].zs * 3;
        if (stus[i].s + stus[i].zs > 140 && stus[i].zh >= 800)
        {
            cout << "Excellent" << "\n";
        }
        else
        {
            cout << "Not excellent" << "\n";
        }
    }
}