#include "Bureaucrat.hpp"

const std::string Bureaucrat::getName() const{
	return (this->_name);
}

int	Bureaucrat::getGrade() const{
	return (this->_grade);
}

Bureaucrat::Bureaucrat(){
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &other){
	this->_grade = other.getGrade();
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name){
	
}

Bureaucrat::~Bureaucrat(){

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
	if (this == &other)
		return *this;
	this->_grade = other.getGrade();
	return *this;
}
