/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-22 16:09:38 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-22 16:09:38 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    value = 0;
    std::cout<< "Default Constructor called" << std::endl;

}
Fixed::Fixed(const Fixed &fp)
{
    std::cout<< "Copy Constructor called" << std::endl;
    *this = fp;
}
Fixed::~Fixed(void)
{
    std::cout<< "Destructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &fp)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &fp)
        value = fp.getRawBits();
    return (*this);

}

int     Fixed::getRawBits() const
{
    std::cout<< "getRawBits member function called" << std::endl;
    return (value);
}
void    Fixed::setRawBits(int const raw)
{
    value = raw;
}