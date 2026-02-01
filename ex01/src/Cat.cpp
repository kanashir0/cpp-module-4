/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:58:03 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 22:59:37 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void) : Animal() {
	std::cout << "A cat has been created." << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "A cat has been cloned." << std::endl;
	_brain = new Brain(*other._brain);
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "A cat has been destroyed." << std::endl;
}

Cat&	Cat::operator=(const Cat& other) {
	std::cout << "A cat has been assigned values from another cat." << std::endl;
	if (this != &other) {
		_type = other._type;
		delete _brain;
		_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Cat::makeSound(void) const {
	std::cout << _type << ": Meooooooow!" << std::endl;
}

Brain*	Cat::getBrain(void) const {
	return _brain;
}