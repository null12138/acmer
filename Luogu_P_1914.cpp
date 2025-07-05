#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char ch;
    cin >> n;
    while (cin >> ch)
    {
        cout << char(((ch + n) - 'a') % 26 + 'a');
    }
}