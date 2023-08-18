/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:24:24 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/17 02:38:35 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		this->inventory[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	int i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		int i = 0;
		while (i < 4)
		{
			*(this->inventory[i]) = *(rhs.inventory[i]);
			i++;
		}		
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (this->inventory[i] != NULL)
		i++;
	if (i < 4 && m)
		this->inventory[i] = m;
	else
	{
		std::cout << "full inventery" << std::endl;
		delete m;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0, index = 0;
	while ((i < 4) && (this->inventory[i] != NULL))
		i++;
	if (i > 0)
	{
		i--;
		while (this->inventory[i]->getType() != type)
		{
			i--;
			if (i == -1) return (0);
		}
		return (this->inventory[i]->clone());
	}
	return (0);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */