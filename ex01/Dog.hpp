/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:37 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/09 18:25:49 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(Dog const &src);
	virtual ~Dog();
	Dog &operator=(Dog const &rhs);
	virtual void makeSound() const;
	std::string getType() const ;
	void setType(std::string type);
	void setBrain(Brain* brain);
	void sayIdeas();
};

#endif /* ************************************************************* DOG_H */