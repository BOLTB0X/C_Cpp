#include<iostream>
#include<utility>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
    vector<pair<int, string> > v;

    v.push_back(pair<int, string>(3, "�˽�"));
    v.push_back(pair<int, string>(6, "�ýÿ�"));
    v.push_back(pair<int, string>(1, "����"));
    v.push_back(pair<int, string>(4, "����"));
    v.push_back(pair<int, string>(2, "������"));
    v.push_back(pair<int, string>(2, "������"));

    cout << "=== After sort === " << endl;

    vector<pair<int, string> >::iterator iter; //���Ľ� 
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