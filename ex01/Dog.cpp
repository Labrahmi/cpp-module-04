/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:47 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/10 10:36:15 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Class : Default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog Class : Copy constructor called" << std::endl;
	this->brain = 0;
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Class : Default destructor called" << std::endl;
	delete this->brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=(Dog const &copy)
{
	if ( this != &copy )
	{
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*(copy.brain));
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

void Dog::setBrain(Brain* brain)
{
	*(this->brain) = *brain;
}

void Dog::sayIdeas()
{
	this->brain->sayIdeas();
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