#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	try {
		Intern Mark;
		Bureaucrat Andre("Andre", 2);

		AForm *someForm = Mark.makeForm("presidential pardon form", "someform");

		std::cout << *someForm << std::endl;
		someForm->execute(Andre);
		Andre.signForm(*someForm);
		someForm->execute(Andre);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}