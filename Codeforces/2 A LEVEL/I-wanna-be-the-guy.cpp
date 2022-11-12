#include <iostream>
#include <set>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    int val;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        cin >> val;
        s.insert(val);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> val;
        s.insert(val);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}