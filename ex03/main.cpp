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
		Bureaucrat Teemu("Teemu", 2);

		AForm *someForm = Mark.makeForm("presidential pardon form", "someform");

		std::cout << *someForm << std::endl;
		someForm->execute(Teemu);
		someForm->beSigned(Teemu);
		someForm->execute(Teemu);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
}