#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    string s;
    set<char> count;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count.insert(s[i]);
        }
    }
    cout << count.size() << endl;
    return 0;
}