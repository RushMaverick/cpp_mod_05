#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
class AForm;

RobotomyRequestForm::RobotomyRequestForm()
: _target(" ")
, AForm("RobotomyRequestForm", 72, 45){

}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) 
: _target(target)
, AForm("RobotomyRequestForm", 72, 45){

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other){
	_target = other._target;
	this->AForm::setStatus(other.getStatus());
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
: _target(other._target){
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::ostream& operator<<(std::ostream& o, RobotomyRequestForm const &rrf) {
	o << "Name: " << rrf.getName() << " | SCF execution grade: " << rrf.getGradeExec() << " | SCF sign grade: " << rrf.getGradeSign() << std::endl;
	return o;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLow();
	else
	{
		std::cout << "*WRRRRRRR-KACHINK-CHKCHKCHK-WHIIRRRRRRRRRRRRRR*" << std::endl;
		static int i;
		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized." << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;
	}
}
