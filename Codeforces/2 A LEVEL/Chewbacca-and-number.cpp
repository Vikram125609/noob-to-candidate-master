#include <iostream>
using namespace std;
int main()
{
    int long long a;
    cin >> a;
    string ans = "";
    string finalAns = "";
    while (a != 0)
    {
        int lastdig = a % 10;
        if (lastdig >= 5)
        {
            lastdig = 9 - lastdig;
            ans += to_string(lastdig);
        }
        else
        {
            ans += to_string(lastdig);
        }
        a = a / 10;
    }
    bool flag = false;
    if(ans[ans.length()-1] == '0')
    {
        ans[ans.length() - 1] = '9';
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        if (ans[i] == '0' && flag == false)
        {
            continue;
        }
        finalAns += ans[i];
        flag = true;
    }
    if (finalAns.size() == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << finalAns << endl;
    }
    return 0;
}