#include "Form.hpp"

Form::Form(std::string name, int grade_sign, int grade_exec)
: _name(name)
, _req_grade_sign(grade_sign)
, _req_grade_exec(grade_exec)
, _signed(false){
}

Form::Form()
: _name()
, _req_grade_sign(50)
, _req_grade_exec(50)
, _signed(false){
}

Form::Form(const Form &other)
: _name(other._name)
, _req_grade_exec(other._req_grade_exec)
, _req_grade_sign(other._req_grade_sign)
, _signed(other._signed){
}

Form::~Form(){

}

void Form::beSigned(const Bureaucrat &signee){
	if (signee.getGrade() > this->_req_grade_sign)
		throw GradeTooLow();
	else
		_signed = true;
}

Form &Form::operator=(const Form &other){
	if (this != &other){
		//Do something or other for the variables
	}
}

const std::string Form::getName(){
	return this->_name;
}