#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
class AForm;
class ShrubberyCreationForm;
class PresidentialPardonForm;
class RobotomyRequestForm;

Intern::Intern()
: _name("John Doe"){
}

Intern::Intern(const Intern &other) 
: _name(other._name){
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	if (this != &other) {
		_name = other._name;
	}
	return *this;
}

Intern::~Intern() {
}

AForm *Intern::makeForm(const std::string formType, const std::string formName){
	AForm* formArray[] = {new RobotomyRequestForm(formName), new PresidentialPardonForm(formName), new ShrubberyCreationForm(formName)};
	std::string strArray[3] = {"robotomy request form", "presidential pardon form", "shrubbery creation form"};

	for (int i = 0; i < 3; i++){
		if (strArray[i] == formType){
			std::cout << "Intern creates " << strArray[i] << std::endl;
			return formArray[i];
		}
	}
	std::cout << "Intern could not create "<< formType << std::endl;
	return nullptr;
}