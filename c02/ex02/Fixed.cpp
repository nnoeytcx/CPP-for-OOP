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
    //std::cout<< "Default Constructor called" << std::endl;

}
Fixed::Fixed(const Fixed &fp)
{
    //std::cout<< "Copy Constructor called" << std::endl;
    *this = fp;
}
Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
    value = n << bits;
}
Fixed::Fixed(const float n)
{
	//std::cout << "Float constructor called" << std::endl;
    value = roundf(n * (1 << bits));
}
Fixed::~Fixed(void)
{
    //std::cout<< "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fp)
{
    //std::cout<< "Copy assignment operator called" << std::endl;
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

bool    Fixed::operator>(Fixed const &fp)
{
    return (this->value > fp.value);
}
bool    Fixed::operator>=(Fixed const &fp)
{
    return (this->value >= fp.value);
}
bool    Fixed::operator<(Fixed const &fp)
{
    return (this->value < fp.value);
}
bool    Fixed::operator<=(Fixed const &fp)
{
    return (this->value <= fp.value);
}
bool    Fixed::operator==(Fixed const &fp)
{
    return (this->value == fp.value);
}
bool    Fixed::operator!=(Fixed const &fp)
{
    return (this->value != fp.value);
}

Fixed Fixed::operator+(Fixed const &fp) const
{
    return (Fixed(toFloat() + fp.toFloat()));
}
Fixed Fixed::operator-(Fixed const &fp) const
{
    return (Fixed(toFloat() - fp.toFloat()));
}
Fixed Fixed::operator*(Fixed const &fp) const
{
    return (Fixed(toFloat() * fp.toFloat()));
}
Fixed Fixed::operator/(Fixed const &fp) const
{
    return (Fixed(toFloat() / fp.toFloat()));
}

Fixed& Fixed::operator++(void)
{
    ++this->value;
    return (*this);
}
Fixed& Fixed::operator--(void)
{
    --this->value;
    return (*this);
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++this->value;
    return (tmp);
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --this->value;
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}
Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}
Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}