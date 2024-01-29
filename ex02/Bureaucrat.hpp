#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "AForm.hpp"
class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		//GETTERS
		const std::string	getName() const;
		int					getGrade() const;
		//MEMBER FUNCTIONS
		void				incrementBureau();
		void				decrementBureau();
		void				signForm(AForm &form);
		//CONSTRUCTORS AND DESTRUCTORS
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
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

std::ostream& operator<<(std::ostream& o, Bureaucrat const &bc);

#endif