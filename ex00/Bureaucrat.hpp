#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		const std::string	getName() const;
		int					getGrade() const;
		void				incrementBureau();
		void				decrementBureau();
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
};
class GradeTooHigh : public std::exception {
	const char * what () const throw () {
		return "Grade too high.";
	}
};

class GradeTooLow : public std::exception {
	const char * what () const throw () {
		return "Grade too low.";
	}
};

std::ostream& operator<<(std::ostream& o, Bureaucrat const &bc);

#endif