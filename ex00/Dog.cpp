/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:47 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/06 19:55:19 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog Class : Default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Class : Copy constructor called" << std::endl;
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Class : Defaukt destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &copy)
{
	if ( this != &copy )
	{
		this->type = copy.type;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << "The dog barks" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Dog::getType() const 
{
	return (this->type);
}

void Dog::setType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */