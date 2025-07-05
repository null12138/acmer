#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int main()
{
    int con;
    char ch;
    con = 0;
    incf(i, 1, 5)
    {
        while (cin >> ch)
        {
            con++;
        }
    }
    cout << con;
}