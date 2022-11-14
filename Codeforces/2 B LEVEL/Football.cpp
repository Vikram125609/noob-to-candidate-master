#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int count = 0;
    int max_count = 0;
    char curr_element = s[0];
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == curr_element)
        {
            count++;
        }
        else
        {
            max_count = max(max_count, count);
            count = 1;
            curr_element = s[i];
        }
    }
    max_count = max(max_count, count);
    if(max_count >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}