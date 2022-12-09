#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, p, e, c;
        cin >> n >> p;
        c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            if (e >= p)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}