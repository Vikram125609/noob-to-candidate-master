#include <iostream>
#include <string>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int len;
    string s;
    string ans = "";
    while (test--)
    {
        ans = "";
        cin >> len;
        cin >> s;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                string temp = "";
                temp += s[i - 2];
                temp += s[i - 1];
                int val = stoi(temp) + 96;
                char a = val;
                ans += a;
                i = i - 2;
            }
            else
            {
                string temp = "";
                temp += s[i];
                int val = stoi(temp) + 96;
                char a = val;
                ans += a;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}