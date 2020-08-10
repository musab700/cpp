#include <iostream>

class Node {
	public:
		int number;
		Node* next;
};

void printlist(Node* n);
void push(Node** headref, int data);
int main() {
	Node* first{ new Node() };
	Node* second{ new Node() };
	Node* third{ new Node() };

	first->number = 1;
	first->next = second;
	second->number = 2;
	second->next = third;
	third->number = 3;
	third->next = NULL;
	printlist(first);

}

void printlist(Node* n) {
	while (n != NULL) {
		std::cout << n->number << '\n';
		n = n->next;
	}
}

void push(Node** headref, int data) {

}