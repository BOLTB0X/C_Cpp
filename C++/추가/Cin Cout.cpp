#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout << "a\n";

    //동기화 되어 있지 않아 b가 먼저 혹은 나중에 출력된다.
    printf("b\n");
    cout << "c\n";
    
    //cin을 cout으로 부터 풀어준다.(untie)
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}