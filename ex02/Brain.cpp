/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:33:11 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/07 12:43:30 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() : count(0)
{
	std::cout << "Brain Class : Default constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Class : Copy constructor called" << std::endl;
	*this = copy;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Class : Default destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &Brain::operator=(Brain const &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
		this->count = copy.count;
	}
	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Brain::addIdea(std::string idea)
{
	this->ideas[this->count] = idea;
	this->count++; if (this->count == 100) { this->count = 0; }
}

void Brain::sayIdeas()
{
	int	i = 0;
	while (!this->ideas[i].empty())
	{
		std::cout << this->ideas[i++] << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */