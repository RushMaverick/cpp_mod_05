#ifndef BUREAUCRATHPP
#define BUREAUCRATHPP

#include <iostream>
#include <string>

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	public:
		const std::string	getName() const;
		int					getGrade() const;
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &other);
};

#endif