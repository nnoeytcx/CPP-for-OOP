/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-23 10:41:51 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-23 10:41:51 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(const Fixed &fp);
        Fixed(const int n);
        Fixed(const float n);
        ~Fixed(void);

        Fixed &operator=(const Fixed &fp);

        float toFloat( void ) const;
        int toInt( void ) const;
        int     getRawBits(void) const;
        void    setRawBits(const int raw);
    private:
        int                 value;
        static const int    bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fp);

#endif