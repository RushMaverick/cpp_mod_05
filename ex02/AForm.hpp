#ifndef AFORMHPP
#define AFORMHPP

#include <string>
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
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
		void			beSigned(const Bureaucrat &signee);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		//CONSTRUCTORS AND DESTRUCTOR
		AForm();
		AForm(std::string name, int grade_sign, int grade_exec);
		AForm &operator=(AForm &other);
		AForm(const AForm &other);
		virtual ~AForm() = 0;
};

std::ostream& operator<<(std::ostream& o, AForm const &aform);

#endif