#include <iostream>
#include <string>
#include <locale>

void convert(std::string txt, int key);

int main(int argc, char *argv[]) {
	if (argc != 2) { return 1; }
	int key = std::stoi(argv[1]);
	std::string text = "";
	std::cout << "text:";	
	std::cin >> text;
	convert(text, key);
}

void convert(std::string txt, int key) {
	int crypted = 0;
	for (int i = 0; i < txt.length(); i++) {
		if (isalpha(txt[i])) {
			if (isupper(txt[i])) {
				crypted = txt[i] - 65;
				crypted = ((crypted + key) % 26) + 65;
				std::cout << (char)crypted;
			}
			else {
				crypted = txt[i] - 97;
				crypted = ((crypted + key) % 26) + 97;
				std::cout << (char)crypted;
			}
		}
		else {
			std::cout << txt[i];
		}
	}
}