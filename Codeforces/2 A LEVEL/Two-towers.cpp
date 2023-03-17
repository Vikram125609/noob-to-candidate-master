#include <iostream>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());
    s1 += s2;
    int count = 0;
    for (int i = 1; i < s1.length(); i++)
    {
        if (s1[i - 1] == s1[i])
        {
            count++;
        }
    }
    if (count <= 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}