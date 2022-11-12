#include <iostream>
using namespace std;
int main()
{
    int testcase;
    cin >> testcase;
    int long long n, m;
    int long long ans;
    while (testcase--)
    {
        cin >> n >> m;
        if(n == 1 && m == 1)
        {
            cout << 0 << endl;
        }
        else if (n >= m)
        {
            ans = n + (m - 1) * 2;
            cout << ans << endl;
        }
        else
        {
            ans = m + (n - 1) * 2;
            cout << ans << endl;
        }
    }
    return 0;
}