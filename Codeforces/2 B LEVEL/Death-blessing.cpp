#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n, e;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int> > array(2, vector<int>(n, -1));
        vector<pair<int, int> > vectorOfPair(n);
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[0][i] = e;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> e;
            array[1][i] = e;
        }
        for (int i = 0; i < n;i++)
        {
            vectorOfPair[i].first = array[1][i];
            vectorOfPair[i].second = array[0][i];
        }
        sort(vectorOfPair.begin(), vectorOfPair.end());
        int long long time = 0;
        for (int i = 0; i < n - 1; i++)
        {
            time += vectorOfPair[i].second;
            vectorOfPair[i + 1].second += vectorOfPair[i].first;
        }
        time += vectorOfPair[n-1].second;
        cout << time << endl;
    }
    return 0;
}