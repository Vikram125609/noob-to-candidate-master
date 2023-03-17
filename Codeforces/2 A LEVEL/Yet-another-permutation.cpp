#include <iostream>
#define ulli unsigned long long int
using namespace std;
void solve()
{
    ulli a, b, n, m;
    cin >> a >> b;
    cin >> n >> m;
    if (a <= b && n <= m)
    {
        cout << n * a << endl;
    }
    else if (a >= b && n <= m)
    {
        cout << n * b << endl;
    }
    else if (a <= b && n >= m)
    {
        ulli ans = n % (m + 1) ? ((n / (m + 1)) + 1) * a : (n / (m + 1)) * a;
        cout << ans << endl;
    }
    else
    {
        float c = (m * a) / (m + 1);
        float d = (m * b) / m;
        if (c < d)
        {
            ulli ratio = n / (m + 1);
            ulli ans1 = ratio * m * a;
            ulli remaining = (n - ratio * (m + 1)) * b;
            ulli ans2 = ans1 + remaining;
            cout << ans2 << endl;
        }
        else
        {
            ulli ans = n * b;
            cout << ans << endl;
        }
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