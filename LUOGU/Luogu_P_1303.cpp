#include <bits/stdc++.h>
#define incf(i, a, b) for (int i = (a); i <= (b); i++)
#define decf(i, a, b) for (int i = (a); i >= (b); i--)
typedef long long ll;
using namespace std;
string ans;

string gjdc(string num1, string num2)
{
    if (num1 == "0" || num2 == "0")
    {
        return "0";
    }
    int n1 = num1.size();
    int n2 = num2.size();
    vector<int> result(n1 + n2, 0);
    for (int i = n1 - 1; i >= 0; i--)
    {
        for (int j = n2 - 1; j >= 0; j--)
        {
            int digit1 = num1[i] - '0';
            int digit2 = num2[j] - '0';
            int product = digit1 * digit2;
            int p1 = i + j;
            int p2 = i + j + 1;
            int sum = product + result[p2];
            result[p2] = sum % 10;
            result[p1] += sum / 10;
        }
    }
    string ans = "";
    for (int digit : result)
    {
        if (!(ans.empty() && digit == 0))
        {
            ans += to_string(digit);
        }
    }
    return ans.empty() ? "0" : ans;
}

int main()
{
    string aa, bb;
    cin >> aa >> bb;
    cout << gjdc(aa, bb);
}