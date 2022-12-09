#include <iostream>
using namespace std;
int hashmap[5][10] = {0};
int mainHash(int a)
{
    return (a / 10) % 10;
}
int secHash(int a)
{
    return a % 10;
}
void search(int a)
{
    int mainIndex = mainHash(a);
    int secIndex = secHash(a);
    if (a == hashmap[mainIndex][secIndex])
    {
        cout << "Element Found in Bucket: " << mainIndex + 1 << " at index: " << secIndex;
    }
    else
    {
        cout << "Element not Found";
    }
}

int main()
{
    int n, a;

    cout << "Enter the number of elements to be inserted: ";
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> a;
        hashmap[mainHash(a)][secHash(a)] = a;
    }

    cout << "Hashmap" << endl;
    for (int i = 0; i < 5; i++)

    {
        cout << "Bucket " << i + 1 << ": ";
        for (int j = 0; j < 10; j++)

        {
            cout << hashmap[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter element to search: ";
    cin >> a;
    search(a);
}
