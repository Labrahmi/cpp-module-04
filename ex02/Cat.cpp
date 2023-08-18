/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:47 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/09 20:22:07 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("cat")
{
	std::cout << "Cat Class : Default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat Class : Copy constructor called" << std::endl;
	this->brain = 0;
	std::cout << "address : " << this->brain << std::endl;
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Class : Default destructor called" << std::endl;
	delete this->brain;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/



Cat &Cat::operator=(Cat const &copy)
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

void Cat::makeSound() const
{
	std::cout << "The Cat meows" << std::endl;
}

void Cat::setBrain(Brain* brain)
{
	*(this->brain) = *brain;
}

void Cat::sayIdeas()
{
	this->brain->sayIdeas();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string Cat::getType() const 
{
	return (this->type);
}

void Cat::setType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */