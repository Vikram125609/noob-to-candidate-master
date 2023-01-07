#include<iostream>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1;i <= n; i++) {
        int k = i;
        int count1 = 0;
        while(k) {
            int last_digit = k % 10;
            if(last_digit != 0) {
                count1++;
            }
            k = k / 10;
        }
        if(count1 == 1) count++;
    }
    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}