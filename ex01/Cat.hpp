/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:37 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/09 20:21:17 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(Cat const &src);
	~Cat();
	Cat &operator=(Cat const &rhs);
	void makeSound() const;
	std::string getType() const ;
	void setType(std::string type);
	void setBrain(Brain* brain);
	void sayIdeas();
};

#endif /* ************************************************************* Cat_H */