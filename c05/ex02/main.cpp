/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:01:46 by tpoungla          #+#    #+#             */
/*   Updated: 2024/06/14 00:01:46 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	try {
		Bureaucrat  first("noey", 20);
    	Bureaucrat  second("P'Mew", 4);
    	Bureaucrat  third("Non", 150);
    	Bureaucrat  fourth("P'Wave", 1);
		std::cout <<BLUE<< "first : "<< first << std::endl <<RESET;
		std::cout <<BLUE<< "second : "<< second << std::endl <<RESET;
		std::cout <<BLUE<< "third : "<< third << std::endl <<RESET;
		std::cout <<BLUE<< "fourth : "<< fourth << std::endl <<RESET;
		std::cout <<RED<< "Try increment first's grade" << std::endl <<RESET;
    	first.incrementGrade();
		std::cout <<RED<< "Try decrement second's grade" << std::endl <<RESET;
    	second.decrementGrade();
		std::cout <<CYAN<< "first : "<< first << std::endl <<RESET;
		std::cout <<CYAN<< "second : "<< second << std::endl <<RESET;
		std::cout <<CYAN<< "third : "<< third << std::endl <<RESET;
		std::cout <<CYAN<< "fourth : "<< fourth << std::endl <<RESET;
		//std::cout <<RED<< "Try decrement third's grade" << std::endl <<RESET;
    	//third.decrementGrade();
		//std::cout <<RED<< "Try increment fourth's grade" << std::endl <<RESET;
    	//fourth.incrementGrade();
		// std::cout <<CYAN<< "first : "<< first << std::endl <<RESET;
		// std::cout <<CYAN<< "second : "<< second << std::endl <<RESET;
		// std::cout <<CYAN<< "third : "<< third << std::endl <<RESET;
		// std::cout <<CYAN<< "fourth : "<< fourth << std::endl <<RESET;
		//Bureaucrat fifth("P'Muay", 0);
		//Bureaucrat sixth("someone", 151);

		// AForm one("first", 24, 14);


		PresidentialPardonForm	one("home");
		std::cout<<MAGENTA<<one<<RESET;
		fourth.signForm(one);
		std::cout<<MAGENTA<<one<<RESET;
		fourth.executeForm(one);
		// executeForm call execute

		RobotomyRequestForm two("home");
		std::cout<<MAGENTA<<two<<RESET;
		fourth.signForm(two);
		// two.beSigned(fourth);
		// signform call besign -> check whether it's signed
		std::cout<<MAGENTA<<two<<RESET;
		fourth.executeForm(two);
		fourth.executeForm(two);
		fourth.executeForm(two);
		fourth.executeForm(two);
		fourth.executeForm(two);
		

		ShrubberyCreationForm three("home");
		std::cout<<MAGENTA<<three<<RESET;
		fourth.signForm(three);
		std::cout<<MAGENTA<<three<<RESET;
		fourth.executeForm(three);
		// std::cout<<MAGENTA<<"form one : "<<one<<std::endl<<RESET;
		// std::cout <<RED<< "Try sign by second with grade "<<second.getGrade()<< std::endl <<RESET;
		// one.beSigned(second);
		// std::cout<<MAGENTA<<"form one : "<<one<<std::endl<<RESET;
		// one.execute(second);
		// second.signForm(one);
		// std::cout <<RED<< "Try get third sign form with grade "<<third.getGrade()<< std::endl <<RESET;
		// third.signForm(one);
		// std::cout <<RED<< "Try sign by third with grade "<<third.getGrade()<< std::endl <<RESET;
		// one.beSigned(third);
	}
	catch (std::exception & e)
	{
		// Generally, stdout should be used for actual program output, while all information 
		// and error messages should be printed to stderr, so that if the user redirects output 
		// to a file, information messages are still printed on the screen and not to the output file.
		// std::cerr is not buffered like the other two.[cout and clog]
		std::cerr << e.what() << std::endl;
	}
}