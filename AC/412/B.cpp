#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
string s, t;
int ss, tt;
int main()
{
    cnt = 0;
    cin >> s;
    cin >> t;
    int x = s.size() - 1;
    int y = t.size() - 1;
    incf(i, 0, x)
    {
        if (s[i + 1] - 'A' >= 0 && s[i + 1] - 'Z' <= 0)
        {
            cnt1++;
            incf(j, 0, y)
            {
                if (s[i] == t[j])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    if (cnt1 == 0)
    {
        cout << "Yes";
        return 0;
    }
    if (cnt == 0 || cnt != cnt1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}