#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: _target(" ")
, AForm("ShrubberyCreationForm", 145, 137){

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) 
: _target(target)
, AForm("ShrubberyCreationForm", 145, 137){

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other)
{
	_target = other.getName();
	return *this;
}


ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
: _target(other.getName()){
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const &bc) {
	o << "Name: " << bc.getName() << " | SCF execution grade: " << bc.getGradeExec() << " | SCF sign grade: " << bc.getGradeSign() << std::endl;
	return o;
}

void ShrubberyCreationForm::execute(const std::string target){
	
}
