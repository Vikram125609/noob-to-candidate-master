#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string ans = "";
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            ans = ans + s[i] + '+';
        }
    }
    ans.pop_back();
    cout << ans;
    return 0;
}