#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int s, n;
    cin >> s >> n;
    vector<vector<int> > ans(n, vector<int>(2, -1));
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ans[i][0] = a;
        ans[i][1] = b;
    }
    sort(ans.begin(), ans.end());
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if(ans[i][0] < s)
        {
            s = s + ans[i][1];
        }
        else
        {
            flag = false;
        }
    }
    if(flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}