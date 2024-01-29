#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		const int			_req_grade_sign;
		const int			_req_grade_exec;
		bool				_signed;
	public:
		//GETTERS
		const int			getGradeSign() const;
		const int			getGradeExec() const;
		const std::string	getName() const;
		const bool			getStatus();

		//MEMBER FUNCTIONS
		void	beSigned(const Bureaucrat &signee);

		//CONSTRUCTORS AND DESTRUCTOR
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form &operator=(Form &other);
		Form(const Form &other);
		~Form();
};

std::ostream& operator<<(std::ostream& o, Form const &form);

#endif