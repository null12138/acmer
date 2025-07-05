#include <bits/stdc++.h>
using namespace std;
int main()
{
    char k;
    while (cin >> k)
    {
        if (k >= 'a' && k <= 'z')
        {
            k -= 32;
        }
        cout << char(k);
    }
}