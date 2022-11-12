#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = __builtin_popcount(n);
    cout << ans - 1;
    return 0;
}
