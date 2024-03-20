/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:10:54 by tpoungla          #+#    #+#             */
/*   Updated: 2024/03/20 01:10:54 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc != 2)
    {
        std::cout<<"Invalid input."<<std::endl;
        return (0);
    }
    harl.complain(argv[1]);
    return (0);
}