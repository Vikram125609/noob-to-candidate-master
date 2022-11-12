#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > v;
    pair<int, int> p;
    int home, guest;
    for (int i = 0; i < n; i++)
    {
        cin >> home;
        cin >> guest;
        p.first = home;
        p.second = guest;
        v.push_back(p);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i].first == v[j].second)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}