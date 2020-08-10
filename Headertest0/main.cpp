#include "header.h"
#include <iostream>

int main() {
	auto one = 0;
	auto two = 0;
	std::cin >> one;
	std::cin >> two;
	Maths operators;
	operators.x = 0;
	operators.y = 0;
	operators.x = one;
	operators.y = two;
	operators.add(operators.x, operators.y);
	operators.subtract(operators.x, operators.y);

	return 0;
}