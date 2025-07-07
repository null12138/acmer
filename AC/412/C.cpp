#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
ll a, b[2000010];
int main()
{
    int n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> a;
        cnt = 0;
        cnt1 = 0;
        incf(o, 1, a) cin >> b[i];
        sort(b, b + a + 1);
        incf(j, 1, a - 1)
        {
            if (cnt != 0)
            {
                if (b[i + 1] <= 2 * b[i])
                {
                    cout << -1;
                    cnt = 1;
                    break;
                }
            }
            else
            {
                break;
            }
        }
        incf(j, 1, a - 1)
        {
        }
    }
}