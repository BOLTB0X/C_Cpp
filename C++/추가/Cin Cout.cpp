#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout << "a\n";

    //����ȭ �Ǿ� ���� �ʾ� b�� ���� Ȥ�� ���߿� ��µȴ�.
    printf("b\n");
    cout << "c\n";
    
    //cin�� cout���� ���� Ǯ���ش�.(untie)
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}