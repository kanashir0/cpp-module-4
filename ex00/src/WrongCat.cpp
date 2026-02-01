/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <gyasuhir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:40:23 by gyasuhir          #+#    #+#             */
/*   Updated: 2026/01/31 19:41:13 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
	std::cout << "A wrong cat has been created." << std::endl;
	_type = "Wrong cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
	std::cout << "A wrong cat has been cloned." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "A wrong cat has been destroyed." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other) {
	std::cout << "A wrong cat has been assigned values from another wrong cat." << std::endl;
	if (this != &other) {
		_type = other._type;
	}
	return *this;
}

void	WrongCat::makeSound(void) const {
	std::cout << _type << ": Wrong Meooooooow!" << std::endl;
}