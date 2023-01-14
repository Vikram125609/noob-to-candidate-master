#include <iostream>
#include <math.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n <= 9) {
        cout << n << endl;
        return;
    }
    int count = 0;
    int num;
    while (n > 0)
    {
        count++;
        num = n;
        n = n / 10;
    }
    cout << 10 + (count - 2) * 9 + num - 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}