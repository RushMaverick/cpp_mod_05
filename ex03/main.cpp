#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void)
{
	try {
		Bureaucrat Mark("Mark", 37);
		ShrubberyCreationForm superForm(Mark.getName());

		std::cout << Mark << std::endl;
		std::cout << superForm << std::endl;

		superForm.execute(Mark);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat Mark("Mark", 37);
		RobotomyRequestForm roboForm(Mark.getName());

		std::cout << Mark << std::endl;
		std::cout << roboForm << std::endl;

		roboForm.execute(Mark);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat Mark("Mark", 5);
		PresidentialPardonForm presForm(Mark.getName());

		std::cout << Mark << std::endl;
		std::cout << presForm << std::endl;

		presForm.execute(Mark);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}