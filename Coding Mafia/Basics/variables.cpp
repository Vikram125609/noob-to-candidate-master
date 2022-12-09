#include <iostream>
#define N 10
#define true false
// Macros

using namespace std;
int a = 20;
void changeGlobalValue()
{
    int a;
    a = 30;
    cout << "Local Value " << a << endl;
}
int main()
{
    // Step1
    cout << sizeof(bool) << endl;
    cout << sizeof(char) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(int long long) << endl;

    // Step2
    changeGlobalValue();
    cout << "The global value of a is " << a << endl;

    // Step3
    // U cannot change the value after assigning.
    const int seconds = 3600;
    cout << "Second " << seconds << endl;
    cout << "The Value Of Macros is " << N << endl;
    cout << "The value of true is changed" << endl;
    return 0;
}