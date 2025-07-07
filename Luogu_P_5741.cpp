#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
struct stu
{
    string name;
    int a;
    int b;
    int c;
} stus[1010];
int judge(int a, int b, int c, int d, int e, int f)
{
    if (abs(a + b + c - d - e - f) <= 10 && abs(a - d) <= 5 && abs(b - e) <= 5 && abs(c - f) <= 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> stus[i].name >> stus[i].a >> stus[i].b >> stus[i].c;
    }
    incf(i, 1, n)
    {
        incf(j, i, n)
        {
            if (judge(stus[i].a, stus[i].b, stus[i].c, stus[j].a, stus[j].b, stus[j].c) == 1)
            {
                if (stus[i].name != stus[j].name)
                {
                    cout << stus[i].name << " " << stus[j].name << "\n";
                }
            }
        }
    }
}