#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> array(n + 1);
    vector<int> hashing(n + 1);
    for (int i = 1; i < array.size(); i++)
    {
        cin >> array[i];
        hashing[array[i]] = i;
    }
    for (int i = 1; i < array.size(); i++)
    {
        array[i] = hashing[i];
        cout << array[i] << " ";
    }
    return 0;
}