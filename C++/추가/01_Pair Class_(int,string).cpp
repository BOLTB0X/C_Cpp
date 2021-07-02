// <utility>����� ������
// pair�� ����
// template <class T1, class T2> struct pair;
// template <typename T1, typename T2> struct pair;
// T1: first
// T2 : second �� ����

#include<iostream>
#include<utility>
#include<string>
using namespace std;

void same(pair<int, string> a, pair<int, string> b) { //������ ��
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
    pair<int, string> p1 = make_pair(1, "�˽�");
    pair<int, string> p2 = make_pair(3, "����");
    pair<int, string> p3 = make_pair(1, "����");

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