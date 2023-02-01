#include <iostream>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int minIndex = INT_MAX;
    int maxIndex = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'R')
            minIndex = min(minIndex, i);
        if (s[i] == 'L')
            maxIndex = max(maxIndex, i);
    }
    if (minIndex < maxIndex)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'L')
        {
            if (s[i + 1] == 'R')
            {
                cout << i + 1 << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}