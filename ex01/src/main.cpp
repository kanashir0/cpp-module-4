/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:58:47 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/02/01 10:32:17 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

int main()
{
	{
		std::cout << MAGENTA << ">> ANIMALS" << RESET << std::endl;
		std::cout << YELLOW << "* Animals arrived at the park *" << RESET << std::endl;
		const int size = 4;
		Animal* animals[size];

		for (int i = 0; i < size; i++) {
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		std::cout << std::endl;

		std::cout << YELLOW << "* The animals went wild! *" << RESET << std::endl;
		for (int i = 0; i < size; i++)
			animals[i]->makeSound();
		std::cout << std::endl;

		std::cout << YELLOW << "* The sun sets... it's time to say goodbye *" << RESET << std::endl;
		for (int i = 0; i < size; i++)
			delete animals[i];
	}
	std::cout << std::endl;
	{
		std::cout << MAGENTA << ">> DOGS" << RESET << std::endl;
		std::cout << YELLOW << "* Creating dog Snoopy with default ideas *" << RESET << std::endl;
		Dog Snoopy;

		Snoopy.getBrain()->setIdea(0, "Eat");
		Snoopy.getBrain()->setIdea(1, "Sleep");
		Snoopy.getBrain()->setIdea(2, "Play");
		std::cout << "Snoopy's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snoopy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Snoopy was cloned into dog Snuppy *" << RESET << std::endl;
		Dog Snuppy = Snoopy;
		std::cout << "Snuppy's ideas after cloning:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snuppy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Snoopy changed his ideas *" << RESET << std::endl;
		Snoopy.getBrain()->setIdea(0, "Eat more");
		Snoopy.getBrain()->setIdea(1, "Sleep more");
		Snoopy.getBrain()->setIdea(2, "Play more");
		std::cout << "Snoopy's new ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snoopy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Snuppy didn't change his ideas *" << RESET << std::endl;
		std::cout << "Snuppy's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Snuppy.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Dogs ran off wagging their tails *" << RESET << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << MAGENTA << ">> CATS" << RESET << std::endl;
		std::cout << YELLOW << "* Creating cat Crash with default ideas *" << RESET << std::endl;
		Cat Crash;

		Crash.getBrain()->setIdea(0, "Eat lasagna");
		Crash.getBrain()->setIdea(1, "Ignore humans");
		Crash.getBrain()->setIdea(2, "Sleep");
		std::cout << "Crash's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Crash.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Crash was cloned into cat Chloe *" << RESET << std::endl;
		Cat Chloe = Crash;
		std::cout << "Chloe's ideas after cloning:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Chloe.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Crash changed his ideas *" << RESET << std::endl;
		Crash.getBrain()->setIdea(0, "Eat brains");
		Crash.getBrain()->setIdea(1, "Code python");
		Crash.getBrain()->setIdea(2, "Play CS:GO");
		std::cout << "Crash's new ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Crash.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Chloe didn't change its ideas *" << RESET << std::endl;
		std::cout << "Chloe's ideas:" << std::endl;
		for (int i = 0; i < 3; i++)
			std::cout << "- Idea " << i << ": " << Chloe.getBrain()->getIdea(i) << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "* Cats walked away indifferently, of course *" << RESET << std::endl;
	}

	return 0;
}