/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:49:35 by macbook           #+#    #+#             */
/*   Updated: 2023/08/14 08:58:04 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure const &src);
	~Cure();
	Cure &operator=(Cure const &rhs);
	void use(ICharacter& target);
	AMateria* clone() const ;

};


#endif /* ************************************************************ CURE_H */