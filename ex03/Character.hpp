/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:11:04 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/15 16:23:23 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
	std::string name;
	AMateria *inventory[4];
	AMateria *oldInventory[4];

public:
	Character();
	Character(Character const &src);
	Character(std::string name);
	~Character();
	Character &operator=(Character const &rhs);
	virtual std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif /* ******************************************************* CHARACTER_H */