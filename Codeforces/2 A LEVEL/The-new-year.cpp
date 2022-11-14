#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> array(3);
    int element;
    for (int i = 0; i < 3; i++)
    {
        cin >> element;
        array[i] = element;
    }
    sort(array.begin(), array.end());
    cout << abs(array[1] - array[0]) + abs(array[2] - array[1]) << endl;
    return 0;
}