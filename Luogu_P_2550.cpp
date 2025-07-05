#include <bits/stdc++.h>
using namespace std;
int con;
int n, given[8], num[8], zj[8];
int main()
{
    cin >> n;
    for (int i = 1; i <= 7; i++)
    {
        cin >> given[i];
    }
    for (int i = 1; i <= n; i++)
    {
        con = 0;
        for (int j = 1; j <= 7; j++)
        {
            int tmp;
            cin >> tmp;
            for (int k = 1; k <= 7; k++)
            {
                if (tmp == given[k])
                {
                    con++;
                }
            }
        }
        zj[8 - con]++;
    }

    for (int i = 1; i <= 7; i++)
    {
        cout << zj[i] << " ";
    }
}