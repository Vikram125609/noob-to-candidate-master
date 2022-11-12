#include <iostream>
using namespace std;

int main()
{
    int z;
    cin >> z;
    int long long len;
    string s;
    string t;
    while (z--)
    {
        string t = "";
        cin >> len;
        cin >> s;
        int i = 0;
        while (s.length() != 0)
        {
            if (i % 2 == 0)
            {
                if(s[0] == '1')
                {
                    string ans = "1";
                    t = t + ans;
                }
                if(s[0] == '0')
                {
                    string ans = "0";
                    ans = ans + t;
                    t = ans;
                }
                s.erase(0, 1);
            }
            else
            {
                if (s[s.length()-1] == '1')
                {
                    string ans = "1";
                    ans = ans + t;
                    t = ans;
                }
                if (s[s.length()-1] == '0')
                {
                    string ans = "0";
                    t = t + ans;
                }
                s.erase(s.length() - 1, 1);
            }
            i++;
        }
        cout << t << endl;
    }
    return 0;
}
