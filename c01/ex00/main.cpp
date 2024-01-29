/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:14:06 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/29 15:12:55 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie, *zombie2, *zombie3;

    zombie = newZombie("mean");
    zombie->announce();
    randomChump("Golf");
    randomChump("Art");
    zombie2 = newZombie("Big");
    zombie2->announce();
}