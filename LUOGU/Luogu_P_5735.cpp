#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
double dis[4];
int main()
{
    double x[4], y[4], dis[4], ans;
    incf(i, 1, 3)
    {
        cin >> x[i] >> y[i];
    }
    dis[1] = 1.0 * sqrt(pow(x[2] - x[1], 2) + pow(y[2] - y[1], 2));
    dis[2] = 1.0 * sqrt(pow(x[3] - x[2], 2) + pow(y[3] - y[2], 2));
    dis[3] = 1.0 * sqrt(pow(x[3] - x[1], 2) + pow(y[3] - y[1], 2));
    printf("%.2f", dis[1] + dis[2] + dis[3]);
}