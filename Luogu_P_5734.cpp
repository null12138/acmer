#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
int main()
{
    string str, stt;
    int q;
    cin >> q >> str;
    incf(i, 1, 4)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            cin >> stt;
            str += stt;
            cout << str << endl;
        }
        else if (opt == 2)
        {
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b) << endl;
            str = str.substr(a, b);
        }
        else if (opt == 3)
        {
            int a;
            cin >> a >> stt;
            cout << str.insert(a, stt) << endl;
        }
        else
        {
            cin >> stt;
            int x = str.find(stt);
            if (x != string::npos)
            {
                cout << x << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
}