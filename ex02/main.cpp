/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabrahm <ylabrahm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:53:49 by ylabrahm          #+#    #+#             */
/*   Updated: 2023/08/10 10:43:28 by ylabrahm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <unistd.h>

void test_1()
{
    Brain *brain_1 = new Brain();
    Dog *scary_1 = new Dog();
    Dog *mary_1 = new Dog();
    std::cout << "\n\n\n\n";

    // set the brain_1's ideas
    brain_1->addIdea("Idea 1: yes but noooo");
    brain_1->addIdea("Idea 2: Best brain_1 in da worrrrrld");
    brain_1->addIdea("Idea 3: best cotatos");

    // set "brain_1" as scary_1 & mary_1's brain_1
    scary_1->setBrain(brain_1);
    mary_1->setBrain(brain_1);

    // scary_1 says its ideas
    std::cout << "\n-scary_1: \n";
    scary_1->sayIdeas();

    // mary_1 says its ideas
    std::cout << "\n-mary_1: \n";
    mary_1->sayIdeas();

    // update "brain_1" and set it as new scary_1's brain_1
    brain_1->addIdea("Idea 4: let's check now");
    scary_1->setBrain(brain_1);

    // check scary_1's ideas, they should be updated, (we add 4th one)
    std::cout << "\n-scary_1: \n";
    scary_1->sayIdeas();

    // check mary_1's ideas, they should not be updated, because every Dog have it own brain_1 (deep)
    std::cout << "\n-mary_1: \n";
    mary_1->sayIdeas();

    // delete every thing, to avoid memory leaks
    std::cout << "\n\n\n\n";
    delete scary_1;
    delete mary_1;
    delete brain_1;
}

void test_2()
{
    Brain *brain_2 = new Brain();
    Dog *scary_2 = new Dog();
    std::cout << "\n\n\n\n";

    // set the brain's ideas
    brain_2->addIdea("Idea 1: yes but noooo");
    brain_2->addIdea("Idea 2: Best brain in da worrrrrld");
    brain_2->addIdea("Idea 3: best cotatos");

    // set "brain" as scary brain
    scary_2->setBrain(brain_2);

    // create Dogos by copying scary's ideas
    Dog *Dogos_2 = new Dog(*scary_2);

    // check if Dogos have scary's ideas
    std::cout << "\n-Dogos: \n";
    Dogos_2->sayIdeas();

    // update brain and update scary's brain as well
    brain_2->addIdea("Idea 4: now we have the 4th, lest see");
    scary_2->setBrain(brain_2);

    // check if scary have been updated
    std::cout << "\n-scary: \n";
    scary_2->sayIdeas();

    // check that Dogos have same as before because they should be separated
    std::cout << "\n-Dogos: \n";
    Dogos_2->sayIdeas();

    std::cout << "\n\n\n\n";
    delete Dogos_2;
    delete scary_2;
    delete brain_2;
}

void test_3()
{
    Dog *scary_3 = new Dog();
    Dog *mary_3 = new Dog();
    Brain *brain_3 = new Brain();
    Brain *newbrain_3 = new Brain();
    std::cout << "\n\n\n\n";

    // set the brain's ideas
    brain_3->addIdea("Idea 1: yes but noooo");
    brain_3->addIdea("Idea 2: Best brain in da worrrrrld");
    brain_3->addIdea("Idea 3: best cotatos");

    // set "brain" as mary brain
    mary_3->setBrain(brain_3);

    // use the copy assignment operator to copy marys data to scary (they should have different brains with same ideas)
    *scary_3 = *mary_3;

    newbrain_3->addIdea("lol");
    mary_3->setBrain(newbrain_3);
    std::cout << "\n";
    std::cout << "mary: \n";
    mary_3->sayIdeas();
    std::cout << "\n";
    std::cout << "scary: \n";
    scary_3->sayIdeas();
    std::cout << "\n\n\n\n";

    std::cout << "\n\n\n\n";
    delete scary_3;
    delete mary_3;
    delete brain_3;
    delete newbrain_3;
}

void check_leaks()
{
    std::cout << "\n\n";
    std::cout << "------------------------\n";
    system("leaks -q fire");
    std::cout << "------------------------\n";
    while (1);
}


int main(void)
{
    Animal *an = new Cat();
    return 0;
}
