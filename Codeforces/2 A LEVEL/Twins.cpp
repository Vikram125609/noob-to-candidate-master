#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ele;
    vector<int> array(n);
    int sum = 0;
    int ans_sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        array[i] = ele;
        sum += array[i];
    }
    sort(array.begin(), array.end());
    for (int i = n - 1; i >= 0; i--)
    {
        ans_sum += array[i];
        count++;
        if (ans_sum > (sum - ans_sum))
        {
            break;
        }
    }
    cout << count;
    return 0;
}