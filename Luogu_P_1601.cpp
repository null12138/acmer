#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
string ans;
string gjd(string aa, string bb)
{
    int la = aa.size();
    int lb = bb.size();
    if (la < lb)
    {
        swap(aa, bb);
        swap(la, lb);
    }
    bb = string(la - lb, '0') + bb;
    string ans(la + 1, '0');
    int carry = 0;
    for (int i = la - 1; i >= 0; --i)
    {
        int sum = (aa[i] - '0') + (bb[i] - '0') + carry;
        ans[i + 1] = (sum % 10) + '0';
        carry = sum / 10;
    }
    ans[0] = carry + '0';
    size_t start = ans.find_first_not_of('0');
    if (start == string::npos)
    {
        return "0";
    }
    return ans.substr(start);
}
int main()
{
    string a, b;
    cin >> a;
    cin >> b;
    cout << gjd(a, b);
}
