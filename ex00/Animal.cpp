/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:31:54 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/06 19:53:59 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Class : Default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Class : Copy constructor called" << std::endl;
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "Animal Class : Default destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=(Animal const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
	std::cout << "The animal makes a sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Animal::getType() const 
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */