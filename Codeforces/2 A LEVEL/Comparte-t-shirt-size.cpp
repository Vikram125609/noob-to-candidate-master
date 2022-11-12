#include <iostream>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    int countX;
    while (t--)
    {
        countX = 0;
        cin >> s1 >> s2;
        map<char, int> mp1;
        map<char, int> mp2;
        for (int i = 0; i < s1.length(); i++)
        {
            mp1[s1[i]] += 1;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            mp2[s1[i]] += 1;
        }
        if (s1 == s2)
        {
            cout << "=" << endl;
        }
        else if(mp1['X'] > mp2['X'])
        {
            if(mp1['L'] > mp2['L'])
            {
                cout << ">" << endl;
            }
            if(mp1['S'] > mp2['S'])
            {
                cout << "<" << endl;
            }
            if(mp1['L'] > mp2['M'])
            {
                cout << ">" << endl;
            }
        }
        else if(mp1['X'] < mp2['X'])
        {
            if (mp1['L'] < mp2['L'])
            {
                cout << "<" << endl;
            }
            if (mp1['S'] > mp2['S'])
            {
                cout << ">" << endl;
            }
        }
    }
    return 0;
}