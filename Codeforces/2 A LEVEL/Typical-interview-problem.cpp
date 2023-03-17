#include <iostream>
using namespace std;
int main()
{
    string s = "FBFFBFFBFBFFBFFBFBFF";
    string str;
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        int size = s.length() - str.length();
        bool flag = false;
        for (int i = 0; i <= size; i++)
        {
            string ans = s.substr(i, str.size());
            if (ans == str)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}