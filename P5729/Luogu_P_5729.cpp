#include <bits/stdc++.h>
using namespace std;
int cube[25][25][25];
int con;

int cut(int o1, int o2, int o3, int o4, int o5, int o6)
{
    for (int i = o1; i <= o4; i++)
    {
        for (int j = o2; j <= o5; j++)
        {
            for (int k = o3; k <= o6; k++)
            {
                cube[i][j][k] = 0;
            }
        }
    }
    return 0;
}

int main()
{
    int w, x0, h, q;
    int x, y, z, xx, yy, zz;
    cin >> w >> x0 >> h >> q;
    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x0; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                cube[i][j][k] = 1;
            }
        }
    }
    for (int l = 1; l <= q; l++)
    {
        cin >> x >> y >> z >> xx >> yy >> zz;
        cut(x, y, z, xx, yy, zz);
    }

    for (int i = 1; i <= w; i++)
    {
        for (int j = 1; j <= x0; j++)
        {
            for (int k = 1; k <= h; k++)
            {
                con += cube[i][j][k];
            }
        }
    }
    cout << con;
}