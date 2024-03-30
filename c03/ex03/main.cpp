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
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap	diamond("Pwave");
	DiamondTrap	diamond2("Pmobile");

	diamond.printStatus();
	diamond2.printStatus();

	diamond.attack("Pmobile");
	diamond2.takeDamage(30);
	diamond2.beRepaired(10);
	diamond.printStatus();
	diamond2.printStatus();
	diamond2.attack("Pwave");
	diamond.takeDamage(20);
	diamond.takeDamage(20);
	diamond.beRepaired(10);
	diamond.printStatus();
	diamond2.printStatus();
	diamond.whoAmI();
	diamond.highFivesGuys();
	diamond.guardGate();
	return (0);
}