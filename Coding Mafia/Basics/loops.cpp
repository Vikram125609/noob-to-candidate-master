#include <iostream>
using namespace std;
int main()
{
    // Step 1 While Loops
    int counter = 1;
    int sum = 0;
    while (counter <= 10)
    {
        sum = sum + counter;
        counter = counter + 1;
    }
    cout << "Using While Loop " << sum << endl;
    sum = 0;
    counter = 0;
    do
    {
        sum = sum + counter;
        counter = counter + 1;
    } while (counter <= 10);
    cout << "Using do While Loop " << sum << endl;
    sum = 0;
    for (counter = 0; counter <= 10; counter++)
    {
        sum = sum + counter;
    }
    cout << "Using do for Loop " << sum << endl;
    // Pattern Using Nested Loops
    cout << "First Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "1 ";
        }
        cout << endl;
    }
    // Another Pattern Using Nested Loops
    cout << "Second Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
    // Another Pattern
    cout << "Third Pattern" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 4; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    sum = 0;
    for (int i = 0;; i++)
    {
        sum = sum + i;
        if (sum >= 150)
        {
            break;
        }
    }

    int i = -1;
    if (i == 1)
        cout << "the value of i is 1" << endl;
    else if (i < 0)
        cout << "the value of i is negative" << endl;
    else
        cout << "the value of i is -1" << endl;
    return 0;
}