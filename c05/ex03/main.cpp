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
#include "Intern.hpp"

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
		std::cout<<std::endl;
		//beSigned() vs signForm()
		// Form one("first", 14, 39);
		// Form two("second", 1, 39);
		// std::cout<<MAGENTA<<"form one : "<<one<<std::endl<<RESET;
		// std::cout <<RED<< "Try sign by second with grade "<<second.getGrade()<< std::endl <<RESET;
		// second.signForm(one);
		// std::cout<<MAGENTA<<"form one : "<<one<<std::endl<<RESET;
		// second.signForm(one);
		
		// std::cout<<MAGENTA<<"form two : "<<two<<std::endl<<RESET;
		// std::cout <<RED<< "Try sign by first with grade "<<first.getGrade()<< std::endl <<RESET;
		// first.signForm(two);
		// std::cout<<MAGENTA<<"form two : "<<two<<std::endl<<RESET;

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
		// fourth.executeForm(two);
		// fourth.executeForm(two);
		// fourth.executeForm(two);
		// fourth.executeForm(two);
		

		ShrubberyCreationForm three("home");
		std::cout<<MAGENTA<<three<<RESET;
		fourth.signForm(three);
		std::cout<<MAGENTA<<three<<RESET;
		fourth.executeForm(three);

		std::cout<<"=----------------------------="<<std::endl;
		PresidentialPardonForm four("home");
		std::cout<<MAGENTA<<four<<RESET;
		first.signForm(four);
		std::cout<<MAGENTA<<four<<RESET;
		// first.executeForm(four);

		std::cout<<"=----------------------------="<<std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		AForm* ppf;
		AForm* scf;
		AForm* none;
		rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		ppf = someRandomIntern.makeForm("PresidentialPardon", "Blender");
		scf = someRandomIntern.makeForm("ShrubberyCreation", "Bartender");
		
		// invalid = someRandomIntern.makeForm("ScrubberyCreation", "Bartender2");

		std::cout<<MAGENTA<<*ppf<<RESET;
		fourth.signForm(*ppf);
		std::cout<<MAGENTA<<*ppf<<RESET;
		fourth.executeForm(*ppf);
		std::cout<<std::endl;
		delete ppf;
		
		std::cout<<MAGENTA<<*rrf<<RESET;
		fourth.signForm(*rrf);
		std::cout<<MAGENTA<<*rrf<<RESET;
		fourth.executeForm(*rrf);
		std::cout<<std::endl;
		delete rrf;

		std::cout<<MAGENTA<<*scf<<RESET;
		fourth.signForm(*scf);
		std::cout<<MAGENTA<<*scf<<RESET;
		fourth.executeForm(*scf);
		delete scf;

		none = someRandomIntern.makeForm("ShrubberyCreaton", "Nope");
		std::cout<<RED<<*none<<RESET;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}