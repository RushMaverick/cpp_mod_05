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


const bool Form::getStatus(){
	return this->_signed;
}

void Form::beSigned(const Bureaucrat &signee){
	if (signee.getGrade() > this->_req_grade_sign)
		throw Bureaucrat::GradeTooLow();
	else
		_signed = true;
}

Form &Form::operator=(Form &other){
	this->_signed = other.getStatus();
    return *this;
}

const std::string Form::getName() const{
	return this->_name;
}

const int Form::getGradeSign() const{
	return this->_req_grade_sign;
}

const int Form::getGradeExec() const{
	return this->_req_grade_exec;
}

std::ostream& operator<<(std::ostream& o, Form const &form)
{
	o << "Name: " << form.getName() << " | Form grade to sign: " << form.getGradeSign() << " | Form grade to execute: " << form.getGradeExec();
	return o;
}
