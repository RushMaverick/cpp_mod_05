#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main(void)
{
	try {
		Bureaucrat Dean("Dean", 37);
		ShrubberyCreationForm superForm(Dean.getName());

		std::cout << Dean << std::endl;
		std::cout << superForm << std::endl;

		Dean.signForm(superForm);
		superForm.execute(Dean);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat Caruy("Caruy", 37);
		RobotomyRequestForm roboForm(Caruy.getName());

		std::cout << Caruy << std::endl;
		std::cout << roboForm << std::endl;
		
		Caruy.signForm(roboForm);
		roboForm.execute(Caruy);
		roboForm.execute(Caruy);
		roboForm.execute(Caruy);
		roboForm.execute(Caruy);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat David("David", 5);
		PresidentialPardonForm presForm(David.getName());

		std::cout << David << std::endl;
		std::cout << presForm << std::endl;

		David.signForm(presForm);
		presForm.execute(David);
		std::cout << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}