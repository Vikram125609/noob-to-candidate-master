#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    vector<int> array(n);
    vector<int> cs;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        array[i] = e;
    }
    sort(array.begin(), array.end());
    reverse(array.begin(), array.end());
    int sum = 0;
    for (int i = 0; i < array.size(); i++)
    {
        if (sum != array[i])
        {
            cs.push_back(array[i]);
            sum += array[i];
            array[i] = -1;
        }
    }
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] != -1 && sum != array[i])
        {
            cs.push_back(array[i]);
            sum += array[i];
        }
    }
    if(cs.size() == array.size()) {
        cout << "Yes" << endl;
        for(auto it : cs) {
            cout << it << " ";
        }
        cout << endl;
    }
    else {
        cout << "No" << endl;
    }
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