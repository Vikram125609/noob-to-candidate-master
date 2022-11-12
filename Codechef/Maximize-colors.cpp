#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a, b, c;
    while (t--)
    {
        cin >> a >> b >> c;
        int count = 0;
        if (a != 0)
        {
            a = a - 1;
            count += 1;
        }
        if (b != 0)
        {
            b = b - 1;
            count += 1;
        }
        if (c != 0)
        {
            c = c - 1;
            count += 1;
        }
        if (a != 0 && b != 0)
        {
            count += 1;
            a = a - 1;
            b = b - 1;
        }
        if (a != 0 && c != 0)
        {
            count += 1;
            a = a - 1;
            c = c - 1;
        }
        if (b != 0 && c != 0)
        {
            count += 1;
            b = b - 1;
            c = c - 1;
        }
        cout << count << endl;
    }
    return 0;
}