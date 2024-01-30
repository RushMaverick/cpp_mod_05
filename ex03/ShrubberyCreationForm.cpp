#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: _target(" ")
, AForm("ShrubberyCreationForm", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
: _target(target)
, AForm("ShrubberyCreationForm", 145, 137){

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other){
	_target = other._target;
	this->AForm::setStatus(other.getStatus());
	return *this;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
: _target(other._target){
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const &bc) {
	o << "Name: " << bc.getName() << " | SCF execution grade: " << bc.getGradeExec() << " | SCF sign grade: " << bc.getGradeSign() << std::endl;
	return o;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	
	if (executor.getGrade() > this->getGradeExec())
		throw GradeTooLow();
	std::ofstream output(_target + "_shrubbery");

	if (!output.is_open()){
		throw FileNotOpen();
	}
	
	std::string tree =
	"     ^\n"
	"    ^^^\n"
	"   ^^^^^\n"
	"  ^^^^^^^\n"
	" ^^^^^^^^^\n"
	"^^^^^^^^^^^\n"
	"     U      \n";

	std::cout << "Sending shrubbery to " << _target << "." << std::endl;
	output << tree;
	output.close();
}
