#include <iostream>
// namespace는 특정한 영역에 이름을 설정할 수 있도록하는 문법
// 각자가 개발한 모듈을 하나로 합치게 해주는게 namespace
namespace A {
	void function() {
		std::cout << "A Namespace" << std::endl;
	}
}

namespace B {
	void function() {
		std::cout << "B Namespace" << std::endl;
	}
}

int main(void) {
	A::function();
	B::function();
	system("pause");
	return 0;
}