#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat Mark("Mark", 50);
		Form superForm("Super Form", 50, 49);


		std::cout << Mark << std::endl;
		std::cout << superForm << std::endl;
		Mark.signForm(superForm);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}