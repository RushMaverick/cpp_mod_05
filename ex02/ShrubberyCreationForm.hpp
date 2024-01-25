#ifndef SHRUBBERYCREATIONFORMHPP
#define SHRUBBERYCREATIONFORMHPP

#include "AForm.hpp"
class AForm;

class ShrubberyCreationForm : public AForm {
	private:
		const std::string _name;
		const int _req_grade_sign;
		const int _req_grade_exec;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string name, const int req_grade_sign, const int req_grade_exec);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();
		void CreateShrub();
};

std::ostream& operator<<(std::ostream& o, ShrubberyCreationForm const &scf);

#endif