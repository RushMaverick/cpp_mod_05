#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try {
		Bureaucrat Mark("Mark", 51);
		Form superForm("Super Form", 50, 49);


		std::cout << Mark << std::endl;
		std::cout << superForm << std::endl;
		std::cout << superForm.getStatus() << std::endl;
		Mark.signForm(superForm);
		std::cout << superForm.getStatus() << std::endl;
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}