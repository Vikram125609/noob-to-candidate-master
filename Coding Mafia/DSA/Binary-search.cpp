#include<iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int low = 0;
    int high = 8;
    while(low <= high) 
    {
        int mid = (low + high) / 2;
        if(array[mid] < 6) {
            low = mid + 1;
        }
        if(array[mid] > 6) {
            high = mid - 1;
        }
        if(array[mid] == 6) {
            cout << mid << endl;
            break;
        }
    }
    return 0;
}