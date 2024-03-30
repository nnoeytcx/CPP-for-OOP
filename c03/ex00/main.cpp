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

int main()
{
    ClapTrap a("Mai");
	ClapTrap b("Pwave");
	ClapTrap c = a;

	for (int i=1; i < 13 ; i++)
	{
		std::cout << "=====================" << std::endl;
		std::cout << std::left << "===== Round " << i << std::right << " ======" << std::endl;
		std::cout << "====================="<< std::endl;
		b.attack("Mai");
		a.takeDamage(b.getAD());
		a.printStatus();
		b.printStatus();
		std::cout << std::endl;
	}

	b.beRepaired(1000);
	a.beRepaired(0);
	a.beRepaired(100000000);
	a.printStatus();
	b.printStatus();
	a.takeDamage(b.getAD());
	b.takeDamage(a.getAD());
	a.printStatus();
	b.printStatus();
	c.printStatus();
}