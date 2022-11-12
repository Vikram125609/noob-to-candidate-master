#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    string s;
    for (int i = 0; i < n;i++)
    {
        cin >> s;
        if(s[0] == 'X')
        {
            if(s[1] == '+')
            {
                x++;
            }
            if(s[1] == '-')
            {
                x--;
            }
        }
        else if(s[0] == '-')
        {
            x = --x;
        }
        else if(s[0] == '+')
        {
            x = ++x;
        }
    }
    cout << x << endl;
    return 0;
}