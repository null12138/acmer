#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int num[1000010];
int main()
{
    int n, m;
    cin >> n >> m;
    incf(i, 1, m) cin >> num[i];
    sort(num, num + m + 1);
    incf(i, 1, m) cout << num[i] << " ";
}