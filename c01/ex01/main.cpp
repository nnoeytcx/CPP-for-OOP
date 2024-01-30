/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:26:12 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/30 17:06:19 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;//, *zombie2, *zombie3;

    //zombie = newZombie("mean");
    //zombie->announce();
    //randomChump("Golf");
    //randomChump("Art");
    //zombie2 = newZombie("Big");
    //zombie2->announce();
    zombie = zombieHorde(5, "noey");
    //delete []zombie
}
