#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    bool flag1 = false;
    bool flag2 = false;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 32 || s[i] < 97)
        {
            count++;
        }
    }
    if (count == s.size())
    {
        flag1 = true;
    }
    if (s[0] >= 97 && count == s.length() - 1)
    {
        flag2 = true;
        s[0] = s[0] - 32;
    }
    if (flag1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 32)
            {
                continue;
            }
            if (s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    if(flag2)
    {
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == 32)
            {
                continue;
            }
            if (s[i] < 97)
            {
                s[i] = s[i] + 32;
            }
        }
    }
    cout << s << endl;
    return 0;
}