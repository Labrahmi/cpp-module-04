/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:31:41 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/13 19:21:10 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(Animal const &src);
	virtual ~Animal();
	Animal &operator=(Animal const &rhs);
	virtual void makeSound() const = 0;
	std::string getType() const ;
	void setType(std::string type);
};

#endif /* ********************************************************** ANIMAL_H */