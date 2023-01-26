#include <iostream>
#include <vector>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    vector<int> array(n);
    int counteven = 0;
    int countodd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        array[i] = e;
        if (array[i] % 2 == 0)
            counteven++;
        else
            countodd++;
    }
    if (countodd >= 3)
    {
        int count = 0;
        cout << "YES" << endl;
        for (int i = 0; i < array.size(); i++)
        {
            if (count == 3)
            {
                break;
            }
            if (array[i] % 2 != 0)
            {
                cout << i + 1 << " ";
                count++;
            }
        }
    }
    else if (countodd >= 1 && counteven >= 2)
    {
        cout << "YES" << endl;
        vector<int> ans;
        for (int i = 0; i < array.size(); i++)
        {
            if (array[i] % 2 != 0)
            {
                ans.push_back(i + 1);
                break;
            }
        }
        int count = 0;
        for (int i = 0; i < array.size(); i++)
        {
            if (count == 2)
            {
                break;
            }
            if (array[i] % 2 == 0)
            {
                ans.push_back(i + 1);
                count++;
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    else
    {
        cout << "NO" << endl;
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