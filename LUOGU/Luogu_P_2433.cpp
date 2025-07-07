#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int cnt, cnt1, cnt2;

int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!";
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " << 10 - 2 - 4;
    }
    else if (T == 3)
    {
        cout << 3 << endl;
        cout << 12 << endl;
        cout << 2;
    }
    else if (T == 4)
    {
        cout << 500.0 / 3;
    }
    else if (T == 5)
    {
        cout << 480 / 32;
    }
    else if (T == 6)
    {
        cout << sqrt(36 + 81);
    }
    else if (T == 7)
    {
        cout << 110 << endl;
        cout << 90 << endl;
        cout << 0;
    }
    else if (T == 8)
    {
        double pi = 3.141593;
        cout << 2 * pi * 5 << endl;
        cout << pi * 25 << endl;
        cout << (4.0 / 3) * pi * 125;
    }
    else if (T == 9)
    {
        cout << 22;
    }
    else if (T == 10)
    {
        cout << 9;
    }
    else if (T == 11)
    {
        cout << 100.0 / 3;
    }
    else if (T == 12)
    {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' + 17);
    }
    else if (T == 13)
    {
        double pi = 3.141593;
        cout << pow(((4.0 / 3) * pi * (64 + 1000)), 1.0 / 3);
    }
    else if (T == 14)
    {
        cout << 50;
    }
    return 0;
}