#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
class AForm;

class PresidentialPardonForm : public AForm {
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const std::string _target);
		PresidentialPardonForm(PresidentialPardonForm const &other);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &other);
		void execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream& o, PresidentialPardonForm const &ppf);
#endif