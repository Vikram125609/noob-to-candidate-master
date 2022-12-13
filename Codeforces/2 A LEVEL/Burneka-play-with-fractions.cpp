// Jai Shree Ram
#include<iostream>
#define ll long long
using namespace std;
void solve () {
    ll int a ,b ,c ,d;
    cin >> a >> b >> c >> d;
    if(a == 0 && c == 0) cout << 0 << endl;
    else if(a == 0 && c != 0 || a != 0 && c == 0) cout << 1 << endl;
    else {
        ll int product1 = a * d;
        ll int product2 = b * c;
        if(product1 == product2) cout << 0 << endl;
        else if(product1 > product2) 
        {
            int remainder1 = product1 % product2;
            if(remainder1 == 0) cout << 1 << endl;
            else cout << 2 << endl;
        }
        else 
        {
            int remainder2 = product2 % product1;
            if(remainder2 == 0) cout << 1 << endl;
            else cout << 2 << endl;

        }
    }
}
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}