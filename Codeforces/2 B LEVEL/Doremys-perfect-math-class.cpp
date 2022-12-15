#include<iostream>
#include<map>
#include<vector>
using namespace std;
void solve() {
    int n ,e;
    cin >> n;
    map<int,int> mp;
    vector<int> array(n);
    for(int i = 0;i < n; i++) {
        cin >> e;
        array[i] = e;
        mp[e] += 1;
    }
    int count = 0;
    for(int i = array.size() - 1;i >= 1;i--) for(int j = i - 1;j >= 0;j--) mp[array[i]-array[j]] += 1;
    for(auto it : mp) cout << it.first << " " << it.second << endl;
}
int main()
{
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