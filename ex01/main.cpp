/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:53:49 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/10 10:46:55 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
    int SIZE = 64;
    const Animal *Animals[SIZE];

    for (int i = 0; i < (SIZE / 2); i++)
    {
        Animals[i] = new Dog();
    }
    for (int i = (SIZE / 2); i < SIZE; i++)
    {
        Animals[i] = new Dog();
    }
    for (int i = 0; i < SIZE; ++i)
    {
        Animals[i]->makeSound();
    }
    for (int i = 0; i < SIZE; ++i)
    {
        delete Animals[i];
    }
    return 0;
}
