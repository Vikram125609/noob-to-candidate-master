#include<iostream>
using namespace std;
void solve() {
    int long long n,a,b;
    cin >> n >> a >> b;
    if(b >= a) {
        if(n % a == 0) {
            cout << n / a << endl;
        }
        else {
            cout << n / a + 1 << endl;
        }
        return;
    }
    else
    {
        cout << 1 << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}