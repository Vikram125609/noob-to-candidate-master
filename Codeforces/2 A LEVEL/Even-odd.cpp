#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        int long long ans = k * 2 - 1;
        cout << ans << endl;
    }
    else
    {
        int long long ans = (k - (n + 1) / 2) * 2;
        cout << ans << endl;
    }
    return 0;
}