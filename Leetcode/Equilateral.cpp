#include <iostream>
#include <vector>
using namespace std;
void ans()
{
    int n;
    int element;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        array[i] = element;
    }
    sort(array.begin(), array.end());
    int sum = 0;
    int mini = INT_MAX;
    for (int i = 0; i <= n - 3; i++)
    {
        sum = abs(array[i] - array[i + 1]) + abs(array[i + 2] - array[i + 1]);
        mini = min(mini, sum);
    }
    cout << mini << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ans();
    }
    return 0;
}