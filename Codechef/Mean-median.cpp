#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;
    while (t--)
    {
        cin >> x >> y;
        cout << y << " " << y << " " << 3 * x - 2 * y << endl;
    }
    return 0;
}
