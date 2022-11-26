#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, a, b;
    while (t--)
    {
        cin >> n >> a >> b;
        if((a + b < n - 1) || (a == b && b == n && n == a))
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