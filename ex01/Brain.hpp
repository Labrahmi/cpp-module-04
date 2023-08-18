/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:33:05 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/07 12:42:04 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
	int	count;
public:
	Brain();
	Brain(Brain const &copy);
	~Brain();
	Brain &operator=(Brain const &copy);
	void addIdea(std::string idea);
	void sayIdeas();
};

#endif /* *********************************************************** BRAIN_H */