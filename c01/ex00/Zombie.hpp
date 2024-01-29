/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:55:17 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/29 15:11:19 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
        Zombie(std::string name);
		void announce(void);
	private:
		std::string name;

};


Zombie* newZombie(std::string name);
void randomChump(std::string name);