#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int rn(int x)
{
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
int x, y, con;
int yrs[6000];
int main()
{
    cin >> x >> y;
    incf(i, x, y)
    {
        if (rn(i) == 1)
        {
            con++;
            yrs[con] = i;
        }
    }
    cout << con << "\n";
    incf(i, 1, con)
    {
        cout << yrs[i] << " ";
    }
}