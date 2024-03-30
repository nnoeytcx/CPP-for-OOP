/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-29 19:58:09 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-29 19:58:09 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    //ClapTrap a("Mai");
	FragTrap b("Pwave");

	//a.printStatus();
	b.printStatus();
	// for (int i=1; i < 13 ; i++)
	// {
	// 	std::cout << "=====================" << std::endl;
	// 	std::cout << std::left << "===== Round " << i << std::right << " ======" << std::endl;
	// 	std::cout << "====================="<< std::endl;
	// 	b.attack("Mai");
	// 	a.takeDamage(b.getAD());
	// 	a.printStatus();
	// 	b.printStatus();
	// 	std::cout << std::endl;
	// }
	//a.attack("John doe");
	b.attack("Pmuay");

	b.takeDamage(99);
	FragTrap Pnew = b;
	b.beRepaired(100);
	//a.printStatus();
	
	b.printStatus();
	Pnew.printStatus();
	b.highFivesGuys();
}