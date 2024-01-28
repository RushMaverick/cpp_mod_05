#ifndef SHRUBBERYCREATIONFORMHPP
#define SHRUBBERYCREATIONFORMHPP

#include "AForm.hpp"
#include <fstream>
class AForm;

class ShrubberyCreationForm : public AForm {
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const; 
};

class FileNotOpen : public std::exception {
	const char * what() const throw() {
		return "File could not open.";
	}
};

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const &scf);

#endif