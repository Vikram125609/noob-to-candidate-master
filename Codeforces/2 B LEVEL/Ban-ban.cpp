#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = (n + 1) / 2;
        cout << ans << endl;
        int first = 1;
        int last = 3 * n;
        for (int i = 1; i <= ans; i++)
        {
            cout << first << " " << last << endl;
            first += 3;
            last -= 3;
        }
    }
    return 0;
}