#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
    vector<pair<int, string> > v;

    v.push_back(pair<int, string>(3, "켄신"));
    v.push_back(pair<int, string>(6, "시시오"));
    v.push_back(pair<int, string>(1, "가츠"));
    v.push_back(pair<int, string>(4, "오공"));
    v.push_back(pair<int, string>(2, "베지터"));
    v.push_back(pair<int, string>(2, "나루토"));

    cout << "=== After sort === " << endl;

    vector<pair<int, string> >::iterator iter; //정렬시 
    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << "[" << iter->first << "," << iter->second << "]" << endl;
    }

    cout << endl;
    sort(v.begin(), v.end());
    cout << "=== After sort === " << endl;

    for (iter = v.begin(); iter != v.end(); iter++) {
        cout << "[" << iter->first << "," << iter->second << "]" << endl;
    }

    return 0;
}