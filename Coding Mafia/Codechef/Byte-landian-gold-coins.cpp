#include<iostream>
#include<vector>
#include<set>
using namespace std;
int similarPairs(vector<string>& words) {
    vector<set<char>> array;
    set<char> s;
    for(int i = 0;i < words.size(); i++) {
        s.clear();
        for(int j = 0;i < words[i].size(); j++) {
            s.insert(words[i][j]);
        }
        array.push_back(s);
    }
    int count = 0;
    for(int i = 0;i < array.size() - 1; i++) {
        for(int j = i + 1; j < array.size(); j++) {
            if(array[i] == array[j]) {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    

    return 0;
}