好的，这是移除所有注释后的线性筛代码：

```c++
#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt;
const int MAXN = 1000000;
bool is_composite[MAXN + 1];
int primes[MAXN / 10];
inline int read()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
void sieve(int limit)
{
    memset(is_composite, false, sizeof(is_composite));
    cnt = 0;
    incf(i, 2, limit)
    {
        if (!is_composite[i])
        {
            primes[cnt++] = i;
        }
        for (int j = 0; j < cnt; ++j)
        {
            int composite = i * primes[j];
            if (composite > limit)
            {
                break;
            }
            is_composite[composite] = true;
            if (i % primes[j] == 0)
            {
                break;
            }
        }
    }
}
int main()
{
    sieve(MAXN);
    return 0;
}
```
线性筛
