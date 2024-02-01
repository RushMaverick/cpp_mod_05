#include "Bureaucrat.hpp"

int main(void)
{
	try {
		Bureaucrat Junhee("Junhee", 45);
		std::cout << Junhee << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Bureaucrat Juan("Juanito", 151);
		std::cout << Juan << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Bureaucrat Teemu("Teemu", 0);
		std::cout << Teemu << std::endl << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Bureaucrat Milica("Milica", 1);
		std::cout << Milica << std::endl << std::endl;
		Milica.incrementBureau();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	try {
		Bureaucrat Jose("Jose", 150);
		std::cout << Jose << std::endl << std::endl;
		Jose.decrementBureau();
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl << std::endl;
	}
	return 0;
}
