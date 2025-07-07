#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;
int a[5010], b[5010], c[5010];
int main()
{
    int n, x;
    x = 1;
    cin >> n;
    a[1] = 1;
    b[1] = 2;
    if (n <= 2)
    {
        cout << n;
        return 0;
    }
    incf(i, 3, n)
    {
        incf(j, 1, x)
        {
            c[j] = a[j] + b[j];
        }
        incf(j, 1, x)
        {
            if (c[j] > 9)
            {
                c[j + 1] += c[j] / 10;
                c[j] = c[j] % 10;
                if (j + 1 > x)
                {
                    x++;
                }
            }
        }
        incf(j, 1, x) a[j] = b[j];
        incf(j, 1, x) b[j] = c[j];
    }
    decf(i, x, 1)
    {
        cout << b[i];
    }
}