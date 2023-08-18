/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 21:41:45 by macbook           #+#    #+#             */
/*   Updated: 2023/08/14 10:02:59 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const &src);
	~Ice();
	Ice &operator=(Ice const &rhs);
	void use(ICharacter& target);
	AMateria* clone() const ;

};

#endif /* ************************************************************* ICE_H */