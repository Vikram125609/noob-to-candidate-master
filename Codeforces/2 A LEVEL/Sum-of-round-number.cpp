#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        vector<string> ans;
        int num = stoi(s);
        for (int i = 0; i < s.length(); i++)
        {
            string dum = "";
            dum += s[i];
            int a = stoi(dum);
            a = a * pow(10, s.length() - i - 1);
            dum = to_string(a);
            ans.push_back(dum);
        }
        int count = 0;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == "0")
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        cout << count << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == "0")
            {
                continue;
            }
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}