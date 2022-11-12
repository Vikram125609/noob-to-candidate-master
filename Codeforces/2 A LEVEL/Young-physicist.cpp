#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int long long  sum = 0;
    int long long force = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> force;
            sum = sum + force;
        }
    }
    if(sum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}