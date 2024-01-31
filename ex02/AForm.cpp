#include "AForm.hpp"

AForm::AForm(std::string name, int grade_sign, int grade_exec)
: _name(name)
, _req_grade_sign(grade_sign)
, _req_grade_exec(grade_exec)
, _signed(false){
}

AForm::AForm()
: _name()
, _req_grade_sign(50)
, _req_grade_exec(50)
, _signed(false){
}

AForm::AForm(const AForm &other)
: _name(other._name)
, _req_grade_exec(other._req_grade_exec)
, _req_grade_sign(other._req_grade_sign)
, _signed(other._signed){
}

AForm::~AForm(){
}

void AForm::beSigned(const Bureaucrat &signee){
	if (signee.getGrade() > this->_req_grade_sign)
		throw Bureaucrat::GradeTooLow();
	else
		_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const{
	std::cout << "No defined behaviour." << std::endl;
}

const bool AForm::getStatus() const{
	return this->_signed;
}

void	AForm::setStatus(bool signStatus) {
	this->_signed = signStatus;
}

AForm &AForm::operator=(AForm &other){
	this->_signed = other.getStatus();
    return *this;
}

const std::string AForm::getName() const{
	return this->_name;
}

const int AForm::getGradeSign() const{
	return this->_req_grade_sign;
}

const int AForm::getGradeExec() const{
	return this->_req_grade_exec;
}

std::ostream& operator<<(std::ostream& o, AForm const &aform)
{
	o << "Name: " << aform.getName() << " | Form grade to sign: " << aform.getGradeSign() << " | Form grade to execute: " << aform.getGradeExec();
	return o;
}
