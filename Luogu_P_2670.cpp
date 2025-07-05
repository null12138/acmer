#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
char mm[101][101], l[101][101];
int main()
{
    int n, m;
    cin >> n >> m;
    incf(i, 1, n)
    {
        incf(j, 1, m)
        {
            char in;
            cin >> in;
            if (in == '*')
            {
                mm[i][j] = '0';
                l[i][j] = '*';
            }
            else
            {
                mm[i][j] = '0';
            }
        }
    }
    int typ;
    incf(i, 1, n)
    {
        incf(j, 1, m)
        {
            if (l[i][j] == '*' && typ == 0)
            {
                mm[i + 1][j + 1]++;
                mm[i - 1][j - 1]++;
                mm[i + 1][j - 1]++;
                mm[i - 1][j + 1]++;
                mm[i + 1][j]++;
                mm[i][j + 1]++;
                mm[i - 1][j]++;
                mm[i][j - 1]++;
            }
        }
    }

    incf(i, 1, n)
    {
        incf(j, 1, m)
        {
            if (l[i][j] != '*')
            {
                cout << mm[i][j];
            }
            else
            {
                cout << '*';
            }
        }
        cout << "\n";
    }
}