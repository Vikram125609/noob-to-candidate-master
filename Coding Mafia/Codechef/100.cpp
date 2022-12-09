#include <iostream>
#include <string>
using namespace std;
void solve(string a, string b, bool flag)
{
    string c;
    for (int i = 0; i < a.length() - b.length(); i++)
    {
        c = "";
        for (int j = i; j < i + b.length(); j++)
        {
            c += a[j];
        }
        if (c == b)
        {
            cout << 1 << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << 0 << endl;
    }
}
int main()
{
    string a;
    string b;
    string c;
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = false;
        cin >> a >> b;
        solve(a, b, flag);
    }
    return 0;
}