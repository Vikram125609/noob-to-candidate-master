#include <iostream>
using namespace std;
void ans(int long long a, int long long b, int long long c)
{
    int dif1 = abs(1 - a);
    int dif2 = abs(b - c) + abs(c - 1);
    if(dif1 < dif2)
    {
        cout << 1 << endl;
    }
    else if(dif1 > dif2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}
int main()
{
    int testcase;
    cin >> testcase;
    int long long a;
    int long long b;
    int long long c;
    while (testcase--)
    {
        cin >> a >> b >> c;
        ans(a, b, c);
    }
    return 0;
}