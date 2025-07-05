#include <bits/stdc++.h>
using namespace std;
int zs[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
int zm[27] = {0};
int main()
{
    int con, maxn, minn, lk;
    maxn = 1;
    minn = 51;
    lk = 0;
    char ch;
    while (cin >> ch)
    {
        con++;
        zm[int(ch) - 'a' + 1]++;
    }

    for (int i = 1; i <= 26; i++)
    {
        if (zm[i] >= maxn)
        {
            maxn = zm[i];
        }
        if (zm[i] <= minn && zm[i] != 0)
        {
            minn = zm[i];
        }
    }
    for (int i = 0; i <= 8; i++)
    {
        if (maxn - minn == zs[i])
        {
            lk = 1;
        }
    }
    if (lk == 1)
    {
        cout << "Lucky Word\n";
        cout << maxn - minn;
    }
    else
    {
        cout << "No Answer\n";
        cout << "0";
    }
}