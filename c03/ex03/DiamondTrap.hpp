/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 08:20:42 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 08:20:42 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
    public:
		DiamondTrap(const std::string name);
		~DiamondTrap(void);

        using ScavTrap::attack;
        void whoAmI();
    private:
        std::string     _name;
};

#endif