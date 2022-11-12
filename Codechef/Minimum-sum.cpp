#include <iostream>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        ll ans = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ans = __gcd(ans, v[i]);
        }
        cout << n * ans << endl;
    }
    return 0;
}