#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int countQ = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'Q')
            {
                countQ++;
            }
            else if(s[i] == 'A' && countQ != 0)
            {
                countQ--;
            }
            else if(s[i] == 'A' && countQ == 0)
            {
                continue;
            }
        }
        if(countQ == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}