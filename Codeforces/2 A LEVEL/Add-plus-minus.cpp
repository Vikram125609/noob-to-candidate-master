#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> array;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        ans = "";
        ans += s[i];
        array.push_back(stoi(ans));
    }
    ans = "";
    int sum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if(sum == 0 && array[i] == 1) {
            ans += '+';
            sum += 1;
        }
        else if(sum > 0 && array[i] == 1) {
            ans += '-';
            sum -= 1;
        }
        else {
            ans += '+';
        }
    }
    ans = ans.substr(1, ans.size());
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}