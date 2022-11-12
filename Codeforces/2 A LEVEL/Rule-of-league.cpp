#include <iostream>
using namespace std;
bool path(int a, int b, int c, string &ans, int sum)
{
    if(sum > a) {
        return false;
    }
    if (sum == a)
    {
        return true;
    }
    sum = sum + b;
    ans = ans + to_string(b);
    if (path(a, b, c, ans, sum) == true)
    {
        return true;
    }
    sum = sum - b;
    sum = sum + c;
    ans.pop_back();
    ans = ans + to_string(c);
    if (path(a, b, c, ans, sum) == true)
    {
        return true;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    int m, x, y;
    while (t--)
    {
        cin >> m >> x >> y;
        string ans = "";
        int sum = 0;
        bool flag = path(m - 1, x, y, ans, sum);
        if (flag == false)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}