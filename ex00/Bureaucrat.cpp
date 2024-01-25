#include "Bureaucrat.hpp"

const std::string Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

Bureaucrat::Bureaucrat(): _name(), _grade(150){
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other.getName()), _grade(other.getGrade()){

}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	if (this->_grade > 150)
		throw GradeTooLow();
	if (this->_grade < 1)
		throw GradeTooHigh();
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	if (this == &other)
		return *this;
	this->_grade = other.getGrade();
	return *this;
}

void Bureaucrat::incrementBureau(){
  if(_grade - 1 < 1)
    throw GradeTooHigh();
  --_grade;
}

void Bureaucrat::decrementBureau(){
  if(_grade + 1 > 150)
    throw GradeTooLow();
 ++_grade;
}

std::ostream& operator<<(std::ostream& o, Bureaucrat const &bc)
{
    o << "Name: " << bc.getName() << " | Bureaucrat grade: " << bc.getGrade();
    return o;
}