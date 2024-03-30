/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 19:34:52 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 19:34:52 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    for (int i = 0; i<100; i++)
        this->_ideas[i] = "idea" + std::to_string(i);
    std::cout<<"\033[32m"<<"Brain Default Constructor called"<< std::endl;
}
Brain::Brain(const Brain &other)
{
    for (int i = 0; i<100; i++)
        this->_ideas[i] = other._ideas[i];
    std::cout<<"\033[32m"<<"Brain Copy Constructor called"<< std::endl;
}
Brain::~Brain(void)
{
    std::cout<<"\033[32m"<<"Brain Destructor called"<< std::endl;
}
Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i<100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    return (*this);
    std::cout<<"\033[32m"<<"Brain Copy Assignment operator called"<< std::endl;
}