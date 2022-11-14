#include<iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int min1 = (k * l) / nl;
    int min2 = c * d;
    int min3 = p / np;
    int mini = min(min1, min(min2, min3));
    int ans = mini / n;
    cout << ans << endl;
    return 0;
}