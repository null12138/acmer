#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int a;
int main()
{
    int n;
    cin >> n;
    incf(i, 1, n)
    {
        cin >> a;
        int cnt = 0;
        if (a > 2)
        {
            incf(j, 2, a)
            {
                if (a % j == 0 && a != j)
                {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 0)
            {
                cout << a << " ";
            }
        }
        else
        {
            if (a == 2)
            {
                cout << 2 << " ";
            }
        }
    }
}