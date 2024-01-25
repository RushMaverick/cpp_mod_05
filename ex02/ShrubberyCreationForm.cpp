#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
: _name("SCF")
, _req_grade_exec(137)
, _req_grade_sign(145) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, const int req_grade_sign, const int req_grade_exec) 
: _name(name)
, _req_grade_exec(req_grade_exec)
, _req_grade_sign(req_grade_sign) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) 
: _name(other.getName())
, _req_grade_sign(other.getGradeSign())
, _req_grade_exec(other.getGradeExec()){

}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::CreateShrub(){
	
}
