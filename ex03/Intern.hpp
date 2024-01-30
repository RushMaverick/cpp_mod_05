#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class Bureaucrat;
class AForm;
#include <exception>

class Intern {
	private:
		std::string _name;
	public:
		AForm *makeForm(const std::string formType, const std::string formName);
		Intern();
		Intern(const Intern &other);
		Intern &operator=(const Intern &other);
		~Intern();
};

#endif