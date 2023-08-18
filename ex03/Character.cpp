/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 10:11:13 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/17 02:48:25 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : name("Default")
{
	int i = 0;
	while (i < 4)
	{
		this->inventory[i] = NULL;
		this->oldInventory[i] = NULL;
		i++;
	}
}

Character::Character(std::string name) : name(name)
{
	int i = 0;

	while (i < 4)
	{
		this->inventory[i] = NULL;
		this->oldInventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	int i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (this->oldInventory[i])
			delete this->oldInventory[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &copy)
{
	if ( this != &copy )
	{
		int i = 0;
		while (i < 4)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
			i++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	int i = 0, j = 0;

	while (this->inventory[i] != NULL)
		i++;
	if ((i < 4) && (m))
	{
		while (j < 4)
		{
			if (this->inventory[j] == m)
			{
				std::cout << "here" << std::endl; 
				this->inventory[i] = m->clone();
				return ;
			}
			j++;
		}
		this->inventory[i] = m->clone();
	}
	else
		std::cout << "Can't equip this Materia" << std::endl;
}

void Character::unequip(int idx)
{
	int	i = 0;
	if (idx > 4 || idx < 0)
	{
		std::cout << "index is out of range" << std::endl;
		return ;
	}
	if (this->inventory[idx] != NULL)
	{
		while (i < 4)
		{
			if (this->oldInventory[i] == NULL)
			{
				this->oldInventory[i] = this->inventory[idx];
				this->inventory[idx] = NULL;
				return ;
			}
			i++;
		}
	}
	std::cout << "cannot unequip this index" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx >= 0) && (idx <= 3) && (this->inventory[idx]))
		this->inventory[idx]->use(target);
	else
		std::cout << "Index out of the bounds" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string const &Character::getName() const
{
	return (this->name);
}

/* ************************************************************************** */