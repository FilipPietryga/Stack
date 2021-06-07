#include <iostream>
#include "Stack.h"

int main() {
	Stack<int> stack(0);
	std::cout << stack << std::endl;
	for (int i = 0; i < 10; i++) {
		stack.push(i);
	}
	std::cout << stack << std::endl;
	for (int i = 0; i < 6; i++) {
		stack.pop();
	}
	std::cout << stack << std::endl;
	std::cout << stack.top() << std::endl;
	return 0;
}