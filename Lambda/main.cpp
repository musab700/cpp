#include <iostream>

int main() {
	int height{};
	int base{};
	std::cin >> height >> base;
	auto trianglearea = [](int x, int y) {
		return (x * y) / 2;
	};
	std::cout << trianglearea;
	return 0;
}
