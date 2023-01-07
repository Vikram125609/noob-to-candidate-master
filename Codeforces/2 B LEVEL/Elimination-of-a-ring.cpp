// #include<iostream>
// #include<vector>
// using namespace std;
// void solve() {
//     int n, e;
//     cin >> n;
//     vector<int> array;
//     for(int i = 0;i < n; i++) {
//         cin >> e;
//         array.push_back(e);
//     }
//     int count = 0;
//     for(int i = array.size() - 1; i >= 0; i--) {
//         if(array[i] != array[0]) count++;
//         else if(array[i] == array[0] && i != 0) continue;
//         else count++;
//     }
//     cout << count << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while(t--) solve();
//     return 0;
// }