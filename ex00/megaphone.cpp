/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:43:30 by tpoungla          #+#    #+#             */
/*   Updated: 2024/01/19 18:11:38 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string	str;
	if (ac == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i=1 ; i<ac ; i++)
		{
			str = av[i];
			for (std::string::iterator it=str.begin(); it!=str.end(); ++it)
			{
				std::cout<< (char)toupper(*it);
			}
		}
	}
	std::cout<<'\n';
}