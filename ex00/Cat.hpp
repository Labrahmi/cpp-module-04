/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:35:37 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/06 19:54:57 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{

public:
	Cat();
	Cat(Cat const &src);
	~Cat();
	Cat &operator=(Cat const &rhs);
	void makeSound() const;
	std::string getType() const ;
	void setType(std::string type);
private:
};

#endif /* ************************************************************* Cat_H */