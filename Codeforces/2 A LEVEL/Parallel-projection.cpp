#include <iostream>
using namespace std;
void solve()
{
    int w, d, h;
    cin >> w >> d >> h;
    int a, b, f, g;
    cin >> a >> b >> f >> g;
    int ans1 = abs(f - a) + abs(g - b) + 2 * min(min(g,abs(g-d)),min(b,abs(b-d))) + h;
    int ans2 = abs(g - b) + abs(f - a) + 2 * min(min(f,abs(f-w)),min(a,abs(a-w))) + h;
    cout << min(ans1,ans2) << endl;
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