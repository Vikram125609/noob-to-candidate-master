#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ans;
    ans.push_back(2);
    ans.push_back(4);
    ans.push_back(-8);
    ans.push_back(9);
    ans.push_back(10);
    ans.push_back(-2);
    ans.push_back(4);
    ans.push_back(-20);
    ans.push_back(10);
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0;i < ans.size(); i++) {
        sum = sum + ans[i];
        if(sum < 0) {
            sum = 0;
        }
        maxi = max(maxi,sum);
    }
    cout<<maxi<<endl;
    return 0;
}