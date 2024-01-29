#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
class AForm;

PresidentialPardonForm::PresidentialPardonForm()
: _target(" ")
, AForm("PresidentialPardonForm", 25, 5){

}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) 
: _target(target)
, AForm("PresidentialPardonForm", 25, 5){

}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other){
	_target = other._target;
	this->AForm::setStatus(other.getStatus());
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &other)
: _target(other._target){
	*this = other;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::ostream& operator<<(std::ostream& o, PresidentialPardonForm const &ppf) {
	o << "Name: " << ppf.getName() << " | SCF execution grade: " << ppf.getGradeExec() << " | SCF sign grade: " << ppf.getGradeSign() << std::endl;
	return o;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLow();
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
