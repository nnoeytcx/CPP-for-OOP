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

int main(void)
{
	try {
		Bureaucrat  first("P'Mew", 3);
    	Bureaucrat  second("noey", 24);
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
		// std::cout <<RED<< "Try decrement third's grade" << std::endl <<RESET;
    	// third.decrementGrade();
		// std::cout <<RED<< "Try increment fourth's grade" << std::endl <<RESET;
    	// fourth.incrementGrade();
		// std::cout <<CYAN<< "first : "<< first << std::endl <<RESET;
		// std::cout <<CYAN<< "second : "<< second << std::endl <<RESET;
		// std::cout <<CYAN<< "third : "<< third << std::endl <<RESET;
		// std::cout <<CYAN<< "fourth : "<< fourth << std::endl <<RESET;
		// Bureaucrat fifth("P'Muay", 0);
		// Bureaucrat sixth("someone", 151);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}