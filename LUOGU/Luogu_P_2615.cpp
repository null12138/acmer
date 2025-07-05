#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int hf[N + 1][N + 1] = {0};
    hf[(N + 1) / 2][1] = 1;
    for (int i = 2; i <= N * N; i++)
    {
        int y = (i - 1) % 3;
        int x = (i - 1) / 3;
        if (x != N && y == 1)
        {
            hf[x + 1][N] = i;
        }
        if (y != 1 && x == N)
        {
            hf[1][y - 1] = i;
        }
        if (y == 1 && x == N)
        {
            hf[x][y + 1] = i;
        }
        if (x != N && y != 1)
        {
            if (hf[x + 1][y - 1] == 0)
            {
                hf[x + 1][y - 1] = i;
            }
            else
            {
                hf[x][y + 1] = i;
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cout << hf[j][i] << " ";
        }
        cout << "\n";
    }
}