/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-23 10:41:44 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-23 10:41:44 by tpoungla         ###   ########.fr       */
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
Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
    value = n << bits;
}
Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
    value = roundf(n * (1 << bits));
}
Fixed::~Fixed(void)
{
    std::cout<< "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fp)
{
    std::cout<< "Copy assignment operator called" << std::endl;
    if (this != &fp)
        value = fp.value;
    return (*this);

}

int     Fixed::getRawBits() const
{
    //std::cout<< "getRawBits member function called" << std::endl;
    return (value);
}
void    Fixed::setRawBits(int const raw)
{
    value = raw;
}
float Fixed::toFloat( void ) const
{
    return (static_cast<float>(value) / (1 << bits));
}
int Fixed::toInt( void ) const
{
    return (value >> bits);
}
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}