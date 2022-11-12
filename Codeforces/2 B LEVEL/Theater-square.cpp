#include<iostream>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int long long horizontal = n / a;
    if(n % a != 0)
    {
        horizontal = horizontal + 1;
    }
    m = m - a;
    int long long vertical = 0;
    if(m > 0)
    {
        vertical = m / a;
        if(m % a != 0)
        {
            vertical = vertical + 1;
        }
    }
    vertical = vertical * horizontal;
    int long long ans = vertical + horizontal;
    cout << ans << endl;
    return 0;
}