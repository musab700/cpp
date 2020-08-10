#include <iostream>
#include <fstream>
#include <vector>
#include <string>

//here's the class that defines a person
class Person {
	public:
		std::string firstName;
		std::string lastName;
		std::string dob;
};

int main(){

	//takes the amount of people you want to register
	int nPeople = 0;
	std::cout << "How many people would you like to register: ";
	std::cin >> nPeople;
	std::vector<Person> people(nPeople);
	
	//takes the title of the file that will be created
	char title[256];
	std::cout << "Title of file: ";
	std::cin >> title;
	std::ofstream Registry(title);

	//registers the data
	for (int i = 0; i < nPeople; i++){
		std::cout << "Person no " << i + 1 << std::endl;
		Registry << "Person no " << i + 1 << std::endl;
		std::cout << "Enter First Name: ";
		std::cin >> people[i].firstName;
		Registry << "First Name:" << people[i].firstName << std::endl;
		std::cout << "Enter Last Name: ";
		std::cin >> people[i].lastName;
		Registry << "Last Name: " << people[i].lastName << std::endl;
		std::cout << "Enter Date of Birth ";
		std::cin >> people[i].dob;
		Registry << "Date of Birth: " << people[i].dob << std::endl << std::endl;
		std::cout << std::endl; 
	}
	Registry.close();
}