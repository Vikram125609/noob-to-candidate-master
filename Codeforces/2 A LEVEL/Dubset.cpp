#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a;
    // WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i = i + 2;
            a = a + " ";
        }
        else
        {
            a = a + s[i];
        }
    }
    cout << a << endl;
    return 0;
}