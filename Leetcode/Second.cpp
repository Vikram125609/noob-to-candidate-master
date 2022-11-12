// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int n;
//     while (t--)
//     {
//         cin >> n;
//         vector<int> array(n);
//         vector<int> array2(n);
//         int val = 0;
//         for (int i = 0; i < n; i++)
//         {
//             val = 3 * i + 2;
//             array[i] = val;
//         }
//         val = 3 * n;
//         for (int i = array.size() - 1; i >= 0; i--)
//         {
//             array2[i] = val;
//             val--;
//         }
//         for (int i = 0; i < array.size(); i++)
//         {
//             cout << array[i] << " " << array2[i] << endl;
//         }
//     }
//     return 0;
// }