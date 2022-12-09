#include <iostream>
using namespace std;
// Vikram Singh
// DJSCE 2024
int main()
{
    // Arithmatic Operation
    int a = 105;
    int b = 20;
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;
    a++;
    cout << "Increment the value of a " << a << endl;
    a--;
    cout << "Decrement the value of a " << a << endl;
    int d = ++a;
    cout << "The value of d is 106 using PreIncrement " << endl;
    int e = a++;
    cout << "The value of e is 106 using PostIncrement " << e << endl;
    cout << "The value of a " << a << endl;

    // Logical Operator
    a = 17;
    bool checkValue = (a == 17);
    cout << checkValue << endl;

    checkValue = (a >= 17);
    cout << checkValue << endl;

    // Step3 
    // Hackerrank
    return 0;
}