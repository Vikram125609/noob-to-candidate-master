#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int element;
    vector<int> array(m);
    for (int i = 0; i < m; i++)
    {
        cin >> element;
        array[i] = element;
    }
    int mini = INT_MAX;
    sort(array.begin(), array.end());
    for (int i = 0; i <= m - n; i++)
    {
        int ans = abs(array[i + n - 1] - array[i]);
        mini = min(mini, ans);
    }
    cout << mini << endl;
    return 0;
}