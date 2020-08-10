#include <iostream>

void drawtriangle(int x);

int main() {
	int height{};
	do {
		std::cout << "Height: ";
		std::cin >> height;
	} while (height > 8 || height <= 0);

	drawtriangle(height);
}

void drawtriangle(int x) {
	if (x < 1) { return; }
	drawtriangle(x - 1);
	for (int i{ 0 }; i < x; i++) {
		std::cout << "#";
	}
	std::cout << "\n";
}