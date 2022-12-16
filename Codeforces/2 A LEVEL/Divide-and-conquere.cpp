// Jai Shree Ram
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void solve() {
    int n ,e;
    cin >> n;
    vector<int> array(n);
    vector<int> odd;
    vector<int> even;
    int count_odd = INT_MAX;
    int count_even = INT_MAX;
    int minimum_odd = INT_MAX;
    int minimum_even = INT_MAX;
    for(int i = 0;i < n;i++) {
        cin >> e;
        array[i] = e;
        if(e % 2 == 0) even.push_back(e);
        if(e % 2 != 0) odd.push_back(e);
    }
    if(odd.size() % 2 == 0) cout << 0 << endl;
    else {
        for(int i = 0;i < odd.size(); i++) {
            count_odd = 0;
            int a = odd[i];
            while(a % 2 != 0) {
                a = a / 2;
                count_odd++;
            }
            minimum_odd = min(minimum_odd,count_odd);
        }
        for(int i = 0;i < even.size(); i++) {
            count_even = 0;
            int a = even[i];
            while(a % 2 == 0) {
                a = a / 2;
                count_even++;
            }
            minimum_even = min(minimum_even,count_even);
        }
        cout << min(minimum_even,minimum_odd)<<endl;
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