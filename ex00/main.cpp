#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat Juan("Juanito", 151);
		std::cout << Juan << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Juan("Juanito", 0);
		std::cout << Juan << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Juan("Juanito", 1);
		std::cout << Juan << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat Juan("Juanito", 1);
		std::cout << Juan << std::endl;
		Juan.incrementBureau();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
