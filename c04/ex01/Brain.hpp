/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpoungla <tpoungla@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-03-30 19:34:48 by tpoungla          #+#    #+#             */
/*   Updated: 2024-03-30 19:34:48 by tpoungla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
    public :
        Brain();
		~Brain();
		Brain(Brain const &other);
		Brain& operator=(Brain const &other);

    private :
        std::string _ideas[100];
};

#endif