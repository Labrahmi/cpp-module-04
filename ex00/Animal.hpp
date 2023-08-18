/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:31:41 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/11 19:47:40 by ylabrahm         ###   ########.fr       */
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
	Animal(Animal const &src);
	~Animal();
	Animal &operator=(Animal const &rhs);
	virtual void makeSound() const;
	std::string getType() const ;
	void setType(std::string type);
};

#endif /* ********************************************************** ANIMAL_H */