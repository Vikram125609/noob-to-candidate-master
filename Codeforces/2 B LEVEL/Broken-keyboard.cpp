// Jai Shree Raam....
#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (count % 2 != 0)
        {
            if (i + 1 > s.length() - 1)
            {
                cout << "NO" << endl;
                return;
            }
            if(s[i] != s[i+1]) {
                cout << "NO" << endl;
                return;
            }
            i = i + 1;
        }
        count++;
    }
    cout << "YES" << endl;
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