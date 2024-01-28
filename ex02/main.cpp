#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main(void)
{
	try {
		Bureaucrat Mark("Mark", 50);
		ShrubberyCreationForm superForm("Super Form");
		
		std::cout << Mark << std::endl;
		std::cout << superForm << std::endl;
		superForm.execute(Mark);
	}
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}