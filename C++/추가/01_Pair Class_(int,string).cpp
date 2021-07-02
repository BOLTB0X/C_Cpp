// <utility>헤더에 존재함
// pair의 구조
// template <class T1, class T2> struct pair;
// template <typename T1, typename T2> struct pair;
// T1: first
// T2 : second 로 구분

#include<iostream>
#include<utility>
#include<string>
using namespace std;

void same(pair<int, string> a, pair<int, string> b) { //같은지 비교
    if (a == b) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
void comp(pair<int, string> a, pair<int, string> b) {
    if (a < b) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}

int main(void) {
    pair<int, string> p1 = make_pair(1, "켄신");
    pair<int, string> p2 = make_pair(3, "가츠");
    pair<int, string> p3 = make_pair(1, "오공");

    cout << "p1.first : " << p1.first << endl;
    cout << "p1.second : " << p1.second << endl;
    cout << endl;

    cout << "p1 == p2 ? ";
    same(p1, p2);
    cout << "p1 == p3 ? ";
    same(p1, p3);
    cout << endl;

    cout << "p1 < p2 ? ";
    comp(p1, p2);
    cout << "p1 < p3 ? ";
    comp(p1, p3);

    return 0;
}