#ifndef FORMHPP
#define FORMHPP

#include <string>
#include <exception>
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
		const int			getGrade();
		const std::string	getName();
		const bool			getStatus();

		//MEMBER FUNCTIONS
		void	beSigned(const Bureaucrat &signee);

		//CONSTRUCTORS AND DESTRUCTOR
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form &operator=(const Form &other);
		Form(const Form &other);
		~Form();
};

class GradeTooHigh : public std::exception {
	const char * what() const throw() {
		return "Grade too high.";
	}
};

class GradeTooLow : public std::exception {
	const char * what() const throw() {
		return "Grade too low.";
	}
};

std::ostream & operator<<(std::ostream& o, Form const &form);

#endif