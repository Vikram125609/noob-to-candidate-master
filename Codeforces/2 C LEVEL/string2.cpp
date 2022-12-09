#include<iostream>
using namespace std;
int main()
{
    string myWord = "myWord";
    char myArray[myWord.size() + 1];
    strcpy(myArray, myWord.c_str());
    int i = 0;
    while(myArray[i] != '/0')
    {
        cout << myArray[i];
        i++;
    }
    return 0;
}